#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  string s;
  int low = 0, up = 0;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (isupper(s[i]))
    {
      up++;
    }
    else
    {
      low++;
    }
  }

  if (up < low)
  {
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = tolower(s[i]);
    }
    cout << s << endl;
  }
  if (up > low)
  {
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = toupper(s[i]);
    }
    cout << s << endl;
  }
  if (up == low)
  {
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = tolower(s[i]);
    }
    cout << s << endl;
  }
}
