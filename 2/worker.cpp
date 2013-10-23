#include "worker.h"
worker::~worker()
{ 
  cout << "Pracownik " << name << " " << surname << " został zwolniony.\n";
}
void worker::print()
{
  cout << "================================================================================\n";
  cout << "Pracownik " << name << " " << surname << " NIP: " << nip << " PESEL: " << pesel << "\n"; 
}
