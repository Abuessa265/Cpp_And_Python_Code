#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, t, cnt = 0;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n;
    x = (n / 2) + 1;
    cout << pow(2, x) - 2 << endl;
  }

  return 0;
}