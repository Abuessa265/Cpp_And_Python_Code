#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int sum = 0;
  char p = 'a';
  for (auto c : s)
  {
    int d, e;
    d = abs(c - p);
    e = 26 - d;
    sum += min(d, e);
    p = c;
  }
  cout << sum << '\n';
}