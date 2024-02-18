#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, cnt = 0;
    cin >> x;
    int digit = x % 10;
    while (x > 0)
    {
      x /= 10;
      cnt++;
    }
    if (cnt == 1)
    {
      cout << ((digit * 10) - 10) + 1 << endl;
    }
    else if (cnt == 2)
    {
      cout << ((digit * 10) - 10) + 3 << endl;
    }
    else if (cnt == 3)
    {
      cout << ((digit * 10) - 10) + 6 << endl;
    }

    else
    {
      cout << ((digit * 10) - 10) + 10 << endl;
    }
  }
}