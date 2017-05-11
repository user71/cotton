#include <iostream>

/* Cute Bot class. It prints something by the way :) */
/* More functionality should be added                */

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
{ // maybe other print
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
