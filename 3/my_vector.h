#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <iostream>
#include <cstring>

#define ALLOC_SIZE 5

using namespace std;

template <class T>
class it;

template <class T>
class my_vector
{
  private:
    T* data;
    unsigned int data_size;
    unsigned int data_count;
  public:
    my_vector();
    my_vector(int size);
    my_vector(my_vector<T>& vec);
    ~my_vector();

    void add_to_end(T e);
    int add_to_pos(T e, int pos);
    int delete_pos(int pos);
    void delete_all()   {data_count = 0;}
    int get_size()  { return data_count;  }
    
    T& operator[](int pos)  { return ((pos < data_count) ? data[pos] : data[data_count-1]); }

    friend ostream& operator<<(ostream& o, my_vector<T>& v)
    {
    if(v.data_count == 0)
    {
      o << "NULL\n";
      return o;
    } 
      for(int i=0; i < v.data_count; i++)
        o << v.data[i] << "\n";
      return o;
    }

    
   friend class it<T>;
};

template <class T> 
my_vector<T>::my_vector()
{
  try{
    data = new T[ALLOC_SIZE];
    data_size = ALLOC_SIZE;
    data_count = 0;
    }
  catch(bad_alloc)
  {
    cerr << "Alloc error\n";
  }
}

template <class T> 
my_vector<T>::my_vector(int size)
{
  try{
    data = new T[size];
    data_size = size;
    data_count = 0;
    }
  catch(bad_alloc)
  {
    cerr << "Alloc error\n";
  }
}

template <class T> 
my_vector<T>::my_vector(my_vector<T>& vec)
{
  try{
    data = new T[vec.data_size];
    data_size = vec.data_size;
    data_count = vec.data_count;
    memcpy(data, vec.data, sizeof(T)*data_count);
    }
  catch(bad_alloc)
  {
    cerr << "Alloc error\n";
  }
}

template <class T> 
my_vector<T>::~my_vector()
{
  if(data != NULL)  
    delete data;
  data_size = 0;
  data_count = 0;
}

template <class T> 
void my_vector<T>::add_to_end(T e)
{
  if(data_size <= data_count)
  {
    try{
      T* new_data = new T[data_size+ALLOC_SIZE];
      memcpy(new_data, data, sizeof(T)*data_count);

      delete data;

      new_data[data_count] = e;

      data_size +=ALLOC_SIZE;
      data_count++;
      data = new_data;
    } catch(bad_alloc){
      cerr << "Alloc error\n";
    }
  }
  else
  {
    data[data_count] = e;
    data_count++;
  }
}

template <class T> 
int my_vector<T>::add_to_pos(T e, int pos)
{
  if(pos > data_count)  return -1;
  if(data_count >= data_size)
  {
   try{
    T* new_data = new T[data_size+ALLOC_SIZE];
    memcpy(new_data, data, sizeof(T)*pos);
    new_data[pos] = e;
    memcpy(new_data+pos+1, data+pos, sizeof(T)*(data_count-pos));
    
    delete data;
    
    data_size+=ALLOC_SIZE;
    data_count++;
    data=new_data;
    
    } catch(bad_alloc){
      cerr << "Alloc error\n";
      }
  }
  else
  {
    for(int i = data_count; i >= pos; i--)
      data[i+1] = data[i];
    data[pos] = e;
    data_count++;
  }
}

template <class T>
int my_vector<T>::delete_pos(int pos)
{
  if(pos >= data_count)  return -1;
  for(int i = pos; i < data_count-1; i++)
    data[i] = data[i+1];
  data_count--;
}

template <class T>
class it
{
  private:
    my_vector<T>& vec;
    int pos;
  public:
    it(my_vector<T>& Vec) : vec(Vec), pos(0) {};
    
    it& to_begin()
    {
      pos = 0;
      return *this;
    }
    it& to_end()
    {
      pos = vec.data_count-1;
      return *this;
    }
    T& operator[](int n)
    {
      return vec.data[n];
    }
    T& operator*()
    {
      return vec.data[pos];
    }
    T& operator->()
    {
      return vec.data[pos];
    }
    it& operator++()
    {
      pos++;
      return *this;
    }
    it& operator--()
    {
      pos--;
      return *this;
    }
    it operator++(int a)
    {
      it old = *this;
      ++*this;
      return old;
    }
    it operator--(int a)
    {
      it old = *this;
      --*this;
      return old;
    }
   it& operator=(it right)
   {
    pos = right.pos;
    return *this;
   }
  int operator==(const it& right) 
  {
    if(pos == right.pos && &vec == &(right.vec))  return 1;
    else  return 0;
  }
  int operator!=(const it& right)
  {
    return !(*this == right);  
  }
  operator int()
  {
    if(pos >= vec.data_count) return 0;
    else return 1;
  }

};

#endif
