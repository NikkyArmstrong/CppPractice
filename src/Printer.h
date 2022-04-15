#pragma once

#include <string>
#include <iostream>

enum ETestType
{
  TypeOne,
  TypeTwo
};

template <ETestType T>
class Printer
{
public:
  Printer(int toPrint)
  : m_toPrint(toPrint)
  {
    std::cout << "constructor" << std::endl;
  }

  ~Printer()
  {
    std::cout << "destructor" << std::endl;
  }

  Printer(const Printer<ETestType::TypeOne>& from)
  : m_toPrint(from.getToPrint())
  {
    std::cout << "copy constructor - type converstion One -> Two" << std::endl;
  }

  Printer(const Printer<ETestType::TypeTwo>& from)
  : m_toPrint(from.getToPrint())
  {
    std::cout << "copy constructor - type converstion Two -> One" << std::endl;
  }

  Printer &operator=(Printer rhs)
  {
    m_toPrint = rhs.getToPrint();
    std::cout << "copy assignment" << std::endl;
  }

  void print();
  int getToPrint() const { return m_toPrint; }

private:
  int m_toPrint;
};

template <ETestType T>
void Printer<T>::print()
{
  std::cout << m_toPrint << std::endl;
}

template <>
void Printer<ETestType::TypeOne>::print()
{
  std::cout << "specialisation!" << std::endl;
}
