#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t, a, b, c = 0, count = 0;
  cin >> t;
  while (t--)
  {
    cin >> a >> b;
    if (a == b)
    {
      count = 0;
    }
    else
    {
      c = (a > b) ? a - b : b - a;

      if (c % 10 == 0)
      {
        count = c / 10;
      }
      else
        count = (c / 10) + 1;
    }
    cout << count << endl;
  }
}