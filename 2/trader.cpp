#include "trader.h"

trader::~trader()
{
  cout << "Handlowiec " << name << " " << surname << " został zwolniony\n";
}

float trader::calculate_salary()
{
  return takings*PERCENT;
}

void trader::print()
{
  worker::print();
  cout << "Utarg: " << takings << "\n"
       << "Miesięczna pensja: " << calculate_salary() << "\n";
}

