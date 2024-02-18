#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n;
  k = n / 2;
  cout << k << endl;
  for (int i = 1; i < k; i++)
  {
    cout << "2"
         << " ";
  }
  if (n % 2 == 0)
  {
    cout << "2";
  }
  else
  {
    cout << "3";
  }
}