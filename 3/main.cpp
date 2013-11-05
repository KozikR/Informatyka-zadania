#include <iostream>
#include <string>
#include <fstream>

#include "my_vector.h"
#include "shop.h"
#include "toy.h"

using namespace std;

int main(void)
{
  string shop_file_name, toy_file_name;
  cout << "Prosze podac nazwe pliku z danymi sklepów: ";
  cin >> shop_file_name;
  cout << "Prosze podać nazwę pliku z danymi zabawek: ";
  cin >> toy_file_name;
 
  //shop_file_name = "shops.dat";
  //toy_file_name = "toys.dat";

  ifstream shop_file, toy_file;
  shop_file.open(shop_file_name.c_str());
  my_vector<shop> shop_v;
  shop_file >> shop_v;
  shop_file.close();
 
  toy_file.open(toy_file_name.c_str());
  my_vector<toy> toy_v;
  toy_file >> toy_v;
  toy_file.close();

  it<shop> it_s(shop_v);
  it<toy> it_t(toy_v);
  
  while(it_s)
  {
    it_t.to_begin();
    while(it_t)
    {
      if(!strcmp((*it_s).name, (*it_t).shop_name))
        cout << *it_t << " " << *it_s << "\n";
      it_t++;
    }
    it_s++;
  }
  
  return 0;
}
