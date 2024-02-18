#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<double> a(n), b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  b = a;
  sort(b.begin(), b.end());
  int ind;
  cin >> ind;
  int x = find(b.begin(), b.end(), a[ind - 1]) - b.begin() + 1;
  cout << x << endl;
}