#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, d;
  cin >> n;
  if (n % 2 == 0)
  {
    cout << n / 2;
  }
  else
  {
    d = -((n / 2) + 1);
    cout << d;
  }
}