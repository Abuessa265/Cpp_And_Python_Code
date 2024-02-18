#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    vector<int> v;
    int a, mod;
    cin >> a;
    if (a % 10 != 0)
    {
      v.push_back(a % 10);
    }
    mod = a % 10;
    a = a - mod;
    if (a % 100 != 0)
    {
      v.push_back(a % 100);
    }
    mod = a % 100;
    a = a - mod;
    if (a % 1000 != 0)
    {
      v.push_back(a % 1000);
    }
    mod = a % 1000;
    a = a - mod;
    if (a % 10000 != 0)
    {
      v.push_back(a % 10000);
    }
    if (a >= 10000 && a % 10000 == 0)
    {
      v.push_back(a);
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
  }
}