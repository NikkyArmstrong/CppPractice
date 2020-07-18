#include "Printer.h"

#include <iostream>

Printer::Printer(std::string toPrint)
{
  m_toPrint = toPrint;
}

void Printer::print()
{
  std::cout << m_toPrint;
}