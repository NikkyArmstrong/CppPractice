#pragma once

#include <string>
#include <iostream>

// enum ETestType
// {
//   TypeOne,
//   TypeTwo
// };

template <typename T>
class Printer
{
public:
  Printer(int toPrint)
  {
    m_toPrint = toPrint;
  }

  void print();

private:
  int m_toPrint;
};

// template <ETestType T>
// inline void Printer<T>::print()
// {
//   std::cout << m_toPrint << std::endl;
// }

// template <>
// inline void Printer<ETestType::TypeOne>::print()
// {
//   std::cout << "specialisation!" << std::endl;
// }
