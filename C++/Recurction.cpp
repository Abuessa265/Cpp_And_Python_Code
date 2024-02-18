#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int k)
{
  if (k > 0)
  {
    return k + sum(k - 1);
  }
  else
    return 0;
}

int main()
{
  int add = sum(10);
  cout << "The result is : " << add;
  return 0;
}