#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, y;

    cin >> n;
    x = n / 3;
    y = n % 3;
    int c1 = x, c2 = x;
    if (y == 1)
      c1++;
    if (y == 2)
      c2++;
    cout << c1 << " " << c2 << endl;
  }
}