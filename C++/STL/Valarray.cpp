#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  valarray<int> varr = {10, 2, 20, 1, 30};
  valarray<int> varr1;
  varr1 = varr.apply([](int x)
                     { return x = x + 5; });
  cout << "The new valarray is : ";
  for (auto i : varr1)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "The sum of old valarray is :" << varr.sum() << endl;
  cout << "The sum of new valarray  is :" << varr1.sum() << endl;
  cout << "The largest element of  varr1 is : " << varr1.max() << endl;
  cout << "The smallest element of varr1 is : " << varr1.min() << endl;

  return 0;
}