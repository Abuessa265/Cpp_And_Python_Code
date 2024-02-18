#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,c=0;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int max = arr[0];
  int min = arr[0];
  for (int j = 0; j < n; j++)
  {
    if (arr[j] > max)
    {
      max = arr[j];
      c++;
    }
    if (arr[j] < min)
    {
      min = arr[j];
      c++;
    }
  }
  cout<<c;
}