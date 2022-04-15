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
    DerivedDerived d;
    d.Test();


    // Printer<ETestType::TypeOne> printer1(42);
    // Printer<ETestType::TypeTwo> printer2(56);
    // printer1.print();
    // printer2.print();

    // Printer<ETestType::TypeTwo> printer3 = static_cast<Printer<ETestType::TypeTwo>>(printer1);

    // printer3.print();
}