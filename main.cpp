#include <iostream>
#include <string>

#include "src\Printer.h"

int main()
{
    std::cout << "Print what?";
    std::string input;
    std::getline(std::cin, input);

    Printer myPrinter(input);
    myPrinter.print();
}