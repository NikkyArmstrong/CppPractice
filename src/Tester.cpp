// #include "Tester.h"

// #include <iostream>

// Tester::Tester(int value)
//     : myPrinter{new Printer<int>(value)}
// {
//   std::cout << "Normal constructor" << std::endl;
// }

// Tester::~Tester()
// {
//   std::cout << "Destructor" << std::endl;
//   delete myPrinter;
// }

// Tester::Tester(const Tester &rhs)
//     : myPrinter{new Printer<int>(*rhs.myPrinter)}
// {
//   std::cout << "Copy constructor" << std::endl;
// }

// Tester::Tester(Tester &&rhs)
//     : myPrinter{rhs.myPrinter}
// {
//   std::cout << "move constructor" << std::endl;
//   rhs.myPrinter = nullptr;
// }

// Tester &Tester::operator=(Tester rhs)
// {
//   std::cout << "assignment" << std::endl;
//   swap(*this, rhs);
//   return *this;
// }

// void Tester::call()
// {
//   myPrinter->print();
// }

// void Tester::set(int value)
// {
//   myPrinter->set(value);
// }