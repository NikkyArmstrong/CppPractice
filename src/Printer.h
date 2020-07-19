#include <string>
#include <iostream>

template <class T>
class Printer
{
public:
  Printer(T toPrint)
  {
    m_toPrint = toPrint;
  }

  void print();

private:
  T m_toPrint;
};

template <typename T>
inline void Printer<T>::print()
{
  std::cout << m_toPrint << std::endl;
}
