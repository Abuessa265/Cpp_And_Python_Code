#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, s, count = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    if (s + k <= 5)
      count++;
  }
  cout << count / 3;

  return 0;
}