#ifndef PER_H 
#define PER_H
#include "worker.h"
class per : public worker
{
  protected:
    float salary;
  public:
    per(string Name, string Surname, unsigned long Pesel, unsigned long Nip, float Salary):
      worker(Name, Surname, Pesel, Nip), salary(Salary)
    {}
    ~per();
    float calculate_salary();
    void print();
};
#endif
