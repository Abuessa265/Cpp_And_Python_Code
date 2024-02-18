#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[4], c = 0;
  for (int i = 0; i < 4; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + 4);
  for (int j = 0; j < 3; j++)
  {
    if (arr[j] == arr[j + 1])
    {
      c++;
    }
  }
  cout << c;
}