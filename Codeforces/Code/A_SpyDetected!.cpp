#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int t;
    cin >> t;
    int arr[t];
    map<int, int> sum;
    for (int i = 0; i < t; i++)
    {
      cin >> arr[i];
      sum[arr[i]]++;
    }
    for (int i = 0; i < t; i++)
    {
      if (sum[arr[i]] == 1)
      {
        cout << i + 1 << endl;
      }
    }
  }
  return 0;
}