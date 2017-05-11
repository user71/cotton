#include <iostream>

class FPrinterBot
{
public:
  FPrinterBot();
  void basicPrint();
  void invFrame();
  void setIsActive(bool act);
  bool getIsActive();
  ~FPrinterBot();
  
private:
  bool isActive;
};

FPrinterBot::FPrinterBot()
{
  isActive = true;
}

FPrinterBot::~FPrinterBot()
{
}

void FPrinterBot::invFrame()
{
  std::cout << std::endl;
}

void FPrinterBot::basicPrint()
{
  invFrame();
  std::cout << "basic print is just basic" << std::endl;
  invFrame();
}

void FPrinterBot::setIsActive(bool act)
{
  this->isActive = act;
}

bool FPrinterBot::getIsActive()
{
  return this->isActive;
}
