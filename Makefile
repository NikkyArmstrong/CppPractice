# Variables
# NOTE: Pass CONFIG variable on command line
CC = clang++
LINKERFLAG = -lm
STD = -std=c++17
CFLAGS = -Wall
DEBUG =

# Set config flags
ifndef ${CONFIG}
	CONFIG = Debug
endif

ifeq ($(CONFIG),Debug)
	DEBUG = -g
endif

# Set output folders
OUTDIR = bin/${CONFIG}
BINARY = ${OUTDIR}/Test.exe
OBJDIR = bin/obj

# Set input files
SOURCEDIR = src
SOURCES := $(wildcard ${SOURCEDIR}/*.cpp)
HEADERS := $(wildcard ${SOURCEDIR}/*.h)
OBJECTS := $(patsubst $(SOURCEDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))

# Targets
.PHONY: all build run clean

all: clean build

build: ${OBJECTS} ${OBJDIR}/main.o
	${CC} ${CFLAGS} ${STD} ${DEBUG} -o ${BINARY} $^

${OBJDIR}/%.o: ${SOURCEDIR}/%.cpp ${HEADERS}
	${CC} ${CFLAGS} ${STD} ${DEBUG} -c -o $@ $<

${OBJDIR}/main.o: main.cpp ${HEADERS}
	${CC} ${CFLAGS} ${STD} ${DEBUG} -c -o $@ $<

clean:
	@echo "Cleaning..."
	rm -f ${OUTDIR}/*.*
	rm -f ${OBJDIR}/*.*

run:
	@echo "Running..."
	./${BINARY}