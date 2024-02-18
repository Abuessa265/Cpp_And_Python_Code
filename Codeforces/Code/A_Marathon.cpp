#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;

    if (b > a)
    {
      cnt = cnt + 1;
    }
    if (c > a)
    {
      cnt = cnt + 1;
    }
    if (d > a)
    {
      cnt = cnt + 1;
    }

    cout << cnt << endl;
  }
}