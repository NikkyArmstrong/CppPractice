#include <string>

template <typename T>
class Printer
{
public:
  Printer(T toPrint);
  void print();

private:
  T m_toPrint;
};
