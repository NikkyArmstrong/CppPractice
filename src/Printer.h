#include <string>

class Printer
{
public:
  Printer(std::string toPrint);
  void print();

private:
  std::string m_toPrint;
};
