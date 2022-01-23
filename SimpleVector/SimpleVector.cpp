#include "SimpleVector.h"

template<class T>
SimpleVector<T>::SimpleVector() { 
    buf = new T[9999];
    count = 0; 
  }
  
template<class T>
SimpleVector<T>::~SimpleVector() { delete [] buf;}

template<class T>
T SimpleVector<T>::operator[](int pos) {return buf[pos];};

template<class T>
void SimpleVector<T>::push_back(T item) { buf[count++] = item; }

template<class T>
void SimpleVector<T>::pop_back() { if (count == 0) return; else buf[--count]; }

template<class T>
bool SimpleVector<T>::empty() {if (count == 0) return true; else return false;};

template<class T>
void SimpleVector<T>::clear()
{
  /*for(int i = 0; i<count; i++)
  {
    buf[i] = 0x0;
  }*/
  count = 0;
}

template<class T>
int SimpleVector<T>::size() {return count;}

template<class T>
SimpleVector<T> SimpleVector<T>::operator~(){
  int end = count-1;
  int start = 0;
  while (start<end)
  {
    T temp = buf[start];
    buf[start] = buf[end];
    buf[end] = temp;
    start++;
    end--;
  }
  return *this;
}

template class SimpleVector<string>;
template class SimpleVector<int>;
template class SimpleVector<char>;
template class SimpleVector<double>;
template class SimpleVector<float>;