#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, c = 0;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    if (b - a >= 2)
    {
      c++;
    }
  }
  cout << c;
}