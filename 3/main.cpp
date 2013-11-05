#include <iostream>

#include "my_vector.h"

#include "shop.h"
#include "toy.h"

int main(void)
{
  my_vector <int> test;
  for(int i=0; i<5; i++)
    test.add_to_end(i);
  
//  toy s;

//  cin >> s;
//  cout << s;
/*
  cout << test;

 it<int> i(test);

 cout << "IT \n" << *i << " " ;
 i++;
 cout << *i << " " << i[2];
 
  cout << *(i.to_end());
*/
return 0;
}
