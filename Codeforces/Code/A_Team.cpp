#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, a, b, d, c = 0;

  cin >> n;
  while (n--)
  {
    cin >> a >> b >> d;
    if (a == 1 && b == 1)
    {
      c++;
    }
    else if (b == 1 && d == 1)
    {
      c++;
    }
    else if (d == 1 && a == 1)
    {
      c++;
    }
    else
    {
      continue;
    }
  }
  cout << c;

  return 0;
}
