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

  Printer(const Printer<ETestType::TypeOne>& from) {
    m_toPrint = from.getToPrint();
  }

  void print();
  int getToPrint() const { return m_toPrint; }

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
