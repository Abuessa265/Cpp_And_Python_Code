#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, z = 0;
  cin >> a >> b;
  while (a <= b)
  {
    a *= 3;
    b *= 2;
    z++;
  }
  cout << z;
  return 0;
}
