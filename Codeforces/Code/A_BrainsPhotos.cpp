#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, cnt = 0;
  char ch;
  cin >> n >> m;
  for (int i = 0; i < n * m; i++)
  {
    cin >> ch;
    if (ch == 'C' || ch == 'M' || ch == 'Y')
    {
      cnt++;
    }
  }

  if (cnt > 0)
  {
    cout << "#Color" << endl;
  }
  else
  {
    cout << "#Black&White" << endl;
  }
  return 0;
}