#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <iostream>

#define ALLOC_SIZE 5

using namespace std;

template <class T>
class my_vector
{
  private:
    T* data;
    unsigned int data_size;
    unsigned int data_count;
  public:
    my_vector();
    ~my_vector();

};

template <class T> my_vector<T>::my_vector()
{
  try{
    data = new T[ALLOC_SIZE];
    data_size = ALLOC_SIZEL;
    data_count = 0;
    }
  catch(bad_alloc)
  {
    cerr << "Alloc error\n";
  }
}

template <class T> my_vector<T>::~my_vector()
{
  if(data != NULL)  
    delete data;
  data_size = 0;
  data_count = 0;
}
#endif
