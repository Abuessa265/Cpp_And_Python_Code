#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s, s1, s2[100];
  cin >> s >> s1;
  int n = s.size();

  for (int i = 0; i < n; i++)
  {
    if (s[i] == s1[i])
    {
      s2[i] = '0';
    }
    else
      s2[i] = '1';
  }
  for (int j = 0; j < n; j++)
  {
    cout << s2[j];
  }
}
