#include <iostream>
#include <string>

#include "src\Printer.h"
#include "src\Tester.h"

int main()
{
    Printer<ETestType::TypeOne> printer1(42);
    Printer<ETestType::TypeTwo> printer2(56);
    printer1.print();
    printer2.print();

    Printer<ETestType::TypeTwo> printer3 = static_cast<Printer<ETestType::TypeTwo>>(printer1);

    printer1.print();
    printer3.print();
}