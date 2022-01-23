#include <bits/stdc++.h>
using namespace std;

template<class T>
class SimpleVector {
  T *buf;
  int count;
  
  public:
  SimpleVector();
  ~SimpleVector();

  T operator[](int pos);

  template<class U>
  friend ostream& operator<<(ostream& os, const SimpleVector<U> &vec);
  
  SimpleVector operator~();

  void push_back(T item);
  void pop_back();
  bool empty();
  void clear();
  int size();
};

template<class T>
std::ostream& operator<<(ostream &os, const SimpleVector<T> &vec)
{
  for(int i=0; i<vec.count; i++)
  {
    os << vec.buf[i] << " ";
  }
  return os;
}
//ostream& operator<<(ostream& os, const SimpleVector& vec);