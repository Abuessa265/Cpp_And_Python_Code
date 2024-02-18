#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, ans;
    cin >> a >> b;
    ans = min(max(2 * a, b), max(a, 2 * b));
    cout << ans * ans << endl;
  }
}