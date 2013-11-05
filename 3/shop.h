#ifndef SHOP_H
#define SHOP_H

#include <string>
#include <iostream>
using namespace std;

class shop
{
  public:
    string  shop_name;
    string shop_address;

  friend ostream& operator<<(ostream& o, shop& s)
  {
    o << s.shop_name << " " << s.shop_address << "\n";
    return o;
  }
  friend istream& operator>>(istream& i, shop& s)
  {
    i >> s.shop_name >> s.shop_address;
    return i;
  }
};

#endif
