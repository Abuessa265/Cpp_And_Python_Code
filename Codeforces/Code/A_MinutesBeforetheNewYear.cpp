#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int m, h, c1, c2 = 0, ans;
    cin >> h >> m;
    c1 = 60 * h;
    c2 = m + c1;
    ans = 1440 - c2;
    cout << ans << endl;
  }
  return 0;
}