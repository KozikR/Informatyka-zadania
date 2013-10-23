#include "order.h"

order::~order()
{
  cout << "Na zlecenie pracujący pracownik " << name << " " << surname << " został zwolniony\n";
}

float order::calculate_salary() 
{
  return ((hours <=  WHEN_HIGHER) ? (hours) : (WHEN_HIGHER+1.5*(hours-WHEN_HIGHER)))*hourly_rate; 
}

void order::print()
{
  worker::print();
  cout << "Zatrudniony na umowę o dzieło \n" 
       << "Czas pracy: " << hours << "\n"
       << "Płaca godzinowa: " << hourly_rate << "\n"
       << "Zarabia: " << calculate_salary() << "\n";
}
