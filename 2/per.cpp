#include "per.h"

per::~per()
{ 
  cout << "Na stałe zatrudniony " << name << " " << surname << " został zwolniony\n"; 
}

float per::calculate_salary()
{
  return salary;
}

void per::print()
{
  worker::print();
  cout << "Zatrudniony na stałe\n"
       << "Miesięczna pensja: " << salary << "\n";
}
