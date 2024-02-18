#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int ar[100];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  for (int j = 1; j <= n; j++)
  {
    for (int k = 0; k <= n; k++)
    {
      if (ar[k] == j)
      {
        cout << k + 1 << " ";
      }
    }
  }
}
