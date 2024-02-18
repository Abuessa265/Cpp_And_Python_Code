#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int n, c = 0;
  cin >> n;
  int arr[101];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n - 1; i++)
  {
    c = c + arr[n - 1] - arr[i];
  }
  cout << c;
}