#pragma once

#include <string>
#include <iostream>

template <typename T>
class Printer
{
public:
  Printer(T toPrint);
  void print();
  int getToPrint() const { return m_toPrint; }
  void setToPrint(T val) { m_toPrint = val; }

private:
  T m_toPrint;
};
