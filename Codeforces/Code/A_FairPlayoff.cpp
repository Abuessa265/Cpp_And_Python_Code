#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (max(a, b) < min(c, d) || min(a, b) > max(c, d))
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}