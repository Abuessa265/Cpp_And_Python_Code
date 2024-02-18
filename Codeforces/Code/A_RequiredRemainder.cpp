#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, x, y, n, m, k;
  cin >> t;
  while (t--)
  {
    cin >> x >> y >> n;
    m = ((n - y) / x);
    k = (m * x) + y;
    cout << k << endl;
  }
}