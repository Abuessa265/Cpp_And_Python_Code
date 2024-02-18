#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, a[60] = {0};
    int c = 0, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 1 && i % 2 == 0)
        c++;
      if (a[i] % 2 == 0 && i % 2 == 1)
        b++;
    }
    if (c == b)
      cout << b << endl;
    else
      cout << -1 << endl;
  }
}