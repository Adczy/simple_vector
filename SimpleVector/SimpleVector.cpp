#include "SimpleVector.h"

SimpleVector::SimpleVector() { 
    buf = new int[9999];
    count = 0; 
  }
  
SimpleVector::~SimpleVector() { delete [] buf;}

int SimpleVector::operator[](int pos) {return buf[pos];};

void SimpleVector::push_back(int item) { buf[count++] = item; }
void SimpleVector::pop_back() { if (count == 0) return; else buf[--count] = 0x0; }
bool SimpleVector::empty() {if(count == 0) return true; else return false;};
void SimpleVector::clear()
{
  for(int i = 0; i<count; i++)
  {
    buf[i] = 0x0;
  }
  count = 0;
}
int SimpleVector::size() {return count;}

ostream& operator<<(ostream& os, const SimpleVector& vec)
{
  for(int i=0; i<vec.count; i++)
  {
    os << vec.buf[i] << " ";
  }
  return os;
}

SimpleVector SimpleVector::operator~(){
  int end = count-1;
  int start = 0;
  while (start<end)
  {
    int temp = buf[start];
    buf[start] = buf[end];
    buf[end] = temp;
    start++;
    end--;
  }
  return *this;
}