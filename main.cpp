#include <iostream>
#include <string>

#include "src\Printer.h"
#include "src\Tester.h"

class Factory
{
public:
    Tester CreateTester(int i)
    {
        return Tester(i);
    }
};

int main()
{
    bool test = true;

    test ? std::cout << "true" : std::cout << "false";
}