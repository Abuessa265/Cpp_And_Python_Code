#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, d = 0;
  cin >> n;
  float f;
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  for (int j = 0; j < n; j++)
  {
    d = d + ar[j];
  }
  f = (double)d / n;

  cout << f;
}