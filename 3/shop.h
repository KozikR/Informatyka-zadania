#ifndef SHOP_H
#define SHOP_H

#include <string>
#include <iostream>

#define STRING_L 50
using namespace std;

class shop
{
  public:
    char  name[STRING_L];
    char address[STRING_L];
    int number;

  friend ostream& operator<<(ostream& o, shop& s)
  {
    o << s.address << " " << s.number ;
    return o;
  }
  friend istream& operator>>(istream& i, shop& s)
  {
    i >> s.name >> s.address >> s.number;
    return i;
  }
};

#endif
