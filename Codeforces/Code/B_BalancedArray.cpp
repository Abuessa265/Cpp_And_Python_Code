#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long n;
    cin >> n;
    if (n % 4 != 0)
      cout << "NO";
    else
    {
      cout << "YES" << '\n';
      for (int i = 2; i <= n; i += 2)
        cout << i << " ";
      for (int i = 1; i <= n - 3; i += 2)
        cout << i << " ";
      cout << n + n / 2 - 1;
    }
    cout << '\n';
  }
}