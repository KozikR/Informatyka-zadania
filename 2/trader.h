#ifndef TRADER_H
#define TRADER_H

#define PERCENT 0.1
#include "worker.h"

class trader : public worker
{
  protected:
    float takings;
  public:
    trader(string Name, string Surname, unsigned long Pesel, unsigned long Nip, float Takings):
      worker(Name, Surname, Pesel, Nip), takings(Takings)
    {}
    ~trader();
    float calculate_salary();
    void print();
};
#endif
