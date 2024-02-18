#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int Y, W, N;
  cin >> Y >> W;
  N = 7 - max(W, Y);
  cout << N / __gcd(N, 6) << "/" << 6 / __gcd(N, 6);
  return 0;
}