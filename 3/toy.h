#ifndef TOY_H
#define TOY_H

#include <string>
#include <iostream>
using namespace std;

class toy
{
  public:
    string shop_name;
    string toy_name;
    float price;

  friend ostream& operator<<(ostream& o, toy& s)
  {
    o << s.shop_name << " " << s.toy_name << " " << price << "\n";
    return o;
  }
  
  friend istream& operator>>(istream& i, toy& s)
  {
    i >> s.shop_name >> s.toy_name >> s.price;
    return i;
  }

};

#endif
