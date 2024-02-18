#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
      if (i % 3 == 0 || i % 10 == 3)
      {
        n++;
      }
    }
    cout << n << endl;
  }
}