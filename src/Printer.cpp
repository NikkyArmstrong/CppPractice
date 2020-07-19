#include "Printer.h"

#include <iostream>

template <typename T>
Printer<T>::Printer(T toPrint)
{
  m_toPrint = toPrint;
}

template <typename T>
void Printer<T>::print()
{
  std::cout << m_toPrint;
}