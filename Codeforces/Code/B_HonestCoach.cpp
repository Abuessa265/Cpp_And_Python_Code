#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, minimum;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
      cin >> ar[i];
    }
    sort(ar, ar + n);
    minimum = ar[1] - ar[0];
    for (int i = 1; i < n; i++)
    {
      minimum = min(minimum, ar[i] - ar[i - 1]);
    }
    cout << minimum << endl;
  }
}