#include "SimpleVector.h"
#include <bits/stdc++.h>

int main()
{
  SimpleVector<int> vec;
  SimpleVector<int> vec1;
  SimpleVector<char> vec2;

  cout << "wielkosc wektora: " << vec.size() << endl;
  cout << "czy wektor jest pusty: " << vec.empty() << endl;

  vec.pop_back();

  cout << "pop_back: " << vec.size() << " val: " << vec[0] << endl;

  vec.push_back(5);

  cout << "push_back: " << vec.size() << " val: " << vec[0] << endl;

  vec.push_back(8);
  vec.push_back(20);
  vec.push_back(19);

  cout << vec[0] << " " << vec[1] << " " << vec[2] << " " << vec[3] << endl;

  vec.pop_back();
  vec.pop_back();

  cout << vec[0] << " " << vec[1] << " " << vec[2] << " " << vec[3] << endl;

  vec.push_back(15);
  vec.push_back(33);

  cout << vec[0] << " " << vec[1] << " " << vec[2] << " " << vec[3] << endl;

  cout << "wielkosc wektora: " << vec.size() << endl;
  cout << "czy wektor jest pusty: " << vec.empty() << endl;

  cout << "caly wektor: " << vec << endl;

  vec1 = vec;

  cout << "odwrocony wektor vec: " << ~vec << endl;

  vec.clear();
  cout << "wielkosc wektora: " << vec.size() << endl;
  cout << "czy wektor jest pusty: " << vec.empty() << endl;

  cout << "-------- vec1 -------" << endl;
  cout << "caly wektor: " << vec1 << endl;
  cout << vec1[0] << " " << vec1[1] << " " << vec1[2] << " " << vec1[3] << " " << vec1[4] << " " << vec1[5] << endl;

  cout << "wielkosc wektora vec1: " << vec1.size() << endl;
  cout << "czy wektor jest pusty vec1: " << vec1.empty() << endl;

  vec1.clear();
  cout << "wielkosc wektora vec1: " << vec1.size() << endl;
  cout << "czy wektor jest pusty vec1: " << vec1.empty() << endl;

  vec2.push_back('e');
  vec2.push_back('s');
  vec2.push_back('s');
  vec2.push_back('a');

  cout << vec2[0] << " " << vec2[1] << " " << vec2[2] << " " << vec2[3] << endl;

  cout << "wielkosc wektora: " << vec2.size() << endl;
  cout << "czy wektor jest pusty: " << vec2.empty() << endl;

  cout << "caly wektor: " << vec2 << endl;

  cin.get();
}