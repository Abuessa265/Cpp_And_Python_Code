#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a;
  vector<int> v(n);
  for (auto &a : v)
  {
    cin >> a;
  }
  for (auto p : v)
  {
    cout << p << " ";
  }
  cout << endl;
  return 0;
}