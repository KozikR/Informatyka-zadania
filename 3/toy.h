#ifndef TOY_H
#define TOY_H

#include <string>
#include <iostream>

#define STRING_L 50
using namespace std;

class toy
{
  public:
    char shop_name[STRING_L];
    char toy_name[STRING_L];
    float price;

  friend ostream& operator<<(ostream& o, toy& s)
  {
    o << s.shop_name << " " << s.toy_name << " " << s.price;
    return o;
  }
  
  friend istream& operator>>(istream& i, toy& s)
  {
    i >> s.shop_name >> s.toy_name >> s.price;
    return i;
  }

};

#endif
