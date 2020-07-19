#include <iostream>
#include <string>

#include "src\Printer.h"

int main()
{
    std::cout << "Print what?" << std::endl;
    std::string input;
    std::getline(std::cin, input);

    Printer<std::string> myPrinter(input);
    myPrinter.print();

    Printer<double> myFloatPrinter(4.5);
    myFloatPrinter.print();
}