#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, h, c = 0;
  int ar[1000];
  cin >> n >> h;
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  for (int j = 0; j < n; j++)
  {
    if (ar[j] <= h)
    {
      c = c + 1;
    }
    else
    {
      c = c + 2;
    }
  }
  cout << c;
}