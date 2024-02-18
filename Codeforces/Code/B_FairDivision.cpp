#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int c1 = 0, c2 = 0, x;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      if (x == 1)
      {
        c1++;
      }
      else
        c2++;
    }
    if (c1 % 2 || (c2 % 2 && c1 == 0))
    {
      cout << "NO" << endl;
    }
    else
      cout << "YES" << endl;
  }
  return 0;
}