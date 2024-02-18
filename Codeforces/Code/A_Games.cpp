#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, c = 0;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    cin >> b[i];
  }
  for (int j = 0; j < n; j++)
  {
    for (int k = 0; k < n; k++)
    {
      if (a[j] == b[k])
      {
        c++;
      }
    }
  }
  cout << c;
}