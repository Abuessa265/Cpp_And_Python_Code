#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n + 2];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int Sereja = 0, Dima = 0, L = 0, R = n - 1, Z = 0;
  while (L <= R)
  {
    if (Z % 2 == 0)
    {
      if (arr[L] > arr[R])
      {
        Sereja = Sereja + arr[L];
        L++;
      }
      else
      {
        Sereja = Sereja + arr[R];
        R--;
      }
    }
    else
    {
      if (arr[L] > arr[R])
      {
        Dima = Dima + arr[L];
        L++;
      }
      else
      {
        Dima = Dima + arr[R];
        R--;
      }
    }
    Z++;
  }
  cout << Sereja << " " << Dima << endl;
}