#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
  char x[100], y[100];
  cin >> x >> y;
  cout << strcmp(strlwr(x), strlwr(y));

  return 0;
}