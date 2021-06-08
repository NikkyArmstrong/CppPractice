// #pragma once

// #include "Printer.h"

// class Tester
// {
// public:
//   Tester(int value);
//   ~Tester();

//   Tester(const Tester &rhs);
//   Tester(Tester &&rhs);
//   Tester &operator=(Tester rhs);

//   void call();
//   void set(int value);

//   friend void swap(Tester &first, Tester &second)
//   {
//     std::cout << "swap" << std::endl;
//     using std::swap;
//     swap(first.myPrinter, second.myPrinter);
//   }

// private:
//   Printer<int> *myPrinter;
// };