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
    // Demonstrates RVO on the Tester object
    Factory f;
    Tester test = f.CreateTester(4);
    test.call();

    Tester newTest = test;
    newTest.set(8);
    test.call();
    newTest.call();

    Tester t(3);

    t = test;
    t.call();
}