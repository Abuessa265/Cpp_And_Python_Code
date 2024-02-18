#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, sum1 = 0, sum2 = 0;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    sum1 = s[0] + s[1] + s[2];
    sum2 = s[3] + s[4] + s[5];
    if (sum1 == sum2)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
