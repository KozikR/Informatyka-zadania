#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>

using namespace std;

class worker
{
  protected:
   string name;
   string surname;
   unsigned long pesel;
   unsigned long nip;
  public:
    worker(string Name, string Surname, unsigned long Pesel, unsigned long Nip):
      name(Name), surname(Surname), pesel(Pesel), nip(Nip)
    {};
    virtual ~worker();
    virtual void print();
    virtual float calculate_salary() = 0;
};
#endif
