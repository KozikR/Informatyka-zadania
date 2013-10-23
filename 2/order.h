#ifndef OREDER_H
#define OREDER_H
#include "worker.h"

#define WHEN_HIGHER 40

class order : public worker
{
  protected:
    float hourly_rate;
    float hours;
  public:
    order(string Name, string Surname, unsigned long Pesel, unsigned long Nip, float Hourly_rate, float Hours):
      worker(Name, Surname, Pesel, Nip), hourly_rate(Hourly_rate), hours(Hours)
    {}
    ~order(); 
    float calculate_salary();
    void print();
};
#endif
