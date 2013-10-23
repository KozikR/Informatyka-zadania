#include "worker.h"
#include "per.h"
#include "order.h"
#include "trader.h"

int main()
{
  worker* person;
  //person = new worker("Jan", "Kowalski", 903490234, 109830472); <- klasa czysto wirtualna
  person = new per("Janek", "Kowalski", 9049432, 294024801, 1356.90);
  person->print();
  delete person;
  
  person = new order("Jan", "Kowalski", 56789, 234567, 20, 32);
  person->print();
  delete person;
  person = NULL;

  person = new trader("Marek", "Handlowiec", 22222, 2222, 12934);
  person->print();
  delete person;
  person = NULL;
  return 0;
}
