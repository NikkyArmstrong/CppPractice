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

class Base
{

public:
    virtual void Test() { std::cout << "base" << std::endl; }
};

class Derived : public Base
{

};

class DerivedDerived : public Derived
{
public:
    void Test() override { std::cout << "derivedderived" << std::endl; }
};

int main()
{
    std::cout << x << std::endl;
    std::cout << l << std::endl;

    DerivedDerived d;
    d.Test();
}