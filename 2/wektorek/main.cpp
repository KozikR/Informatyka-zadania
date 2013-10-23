#include <vector>

#include "../worker.h"
#include "../per.h"
#include "../order.h"
#include "../trader.h"

int main()
{
  int n = 3;
  vector<worker*> tab;
  
  tab.push_back(new per("Jan", "Nastałe", 22222, 333333, 3439.34));
  tab.push_back(new trader("Henio", "Sprzedawca", 43222, 565656, 130345.98));
  tab.push_back(new order("Waldek", "Zleceniobiorca", 2222, 3333, 23.45, 45));

  vector<worker*>::iterator it;

  for(it=tab.begin(); it!=tab.end(); ++it)
  {
    (*it)->print();
  }
  cout << "\n Masowe zwolnienia: \n";
  for(it=tab.begin(); it!=tab.end(); ++it)
  {
    delete *it;
    *it = NULL;
  }
  return 0;
}
