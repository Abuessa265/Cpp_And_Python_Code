#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int final, p, q, arr[200], c = 0;
  cin >> final >> p;
  for (int i = 0; i < p; i++)
  {
    cin >> arr[i];
  }
  cin >> q;
  for (int j = p; j < p + q; j++)
  {
    cin >> arr[j];
  }
  sort(arr, arr + (p + q));

  for (int k = 0; k < p + q; k++)
  {
    if (arr[k] != arr[k + 1])
    {
      c++;
    }
  }
  if (final == c)
  {
    cout << "I become the guy.";
  }
  else
  {
    cout << "Oh, my keyboard!";
  }
}