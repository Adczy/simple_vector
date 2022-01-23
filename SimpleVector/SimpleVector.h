#include <bits/stdc++.h>
using namespace std;

class SimpleVector {
  int *buf;
  int count;
  
  public:
  SimpleVector();
  ~SimpleVector();

  int operator[](int pos);
  friend ostream& operator<<(ostream& os, const SimpleVector& vec);
  
  SimpleVector operator~();

  void push_back(int item);
  void pop_back();
  bool empty();
  void clear();
  int size();
};

//ostream& operator<<(ostream& os, const SimpleVector& vec);