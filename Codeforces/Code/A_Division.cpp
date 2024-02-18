#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int X;
    cin >> X;
    if (1900 <= X)
    {
      cout << "Division 1" << endl;
    }
    else if (1600 <= X)
    {
      cout << "Division 2" << endl;
    }
    else if (1400 <= X)
    {
      cout << "Division 3" << endl;
    }
    else
    {
      cout << "Division 4" << endl;
    }
  }
}