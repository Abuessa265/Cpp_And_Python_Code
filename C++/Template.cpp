#include <iostream>
#include <bits/stdc++.h>

template <class T> // class or typemame use kora jai
T largest(T x, T y)
{
  return (x > y) ? x : y;
}

using namespace std;
int main()
{
  cout << largest(10, 20) << endl;
  cout << largest(30.4, 40.6) << endl;
  cout << largest('y', 'h') << endl;
  return 0;
}
