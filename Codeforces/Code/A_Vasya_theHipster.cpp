#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, low, upp, diff, ans;
  cin >> a >> b;
  if (a > b)
  {
    low = b;
    upp = a;
  }
  else
  {
    low = a;
    upp = b;
  }
  diff = upp - low;
  ans = diff / 2;

  cout << low << " " << ans;
}