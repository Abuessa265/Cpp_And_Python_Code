
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  for (int i = 1; i <= 4; i++)
  {

    int n;
    cin >> n; // x1,x2,x3,x4 input
    v.push_back(n);
  }
  sort(v.begin(), v.end());
  int a = v[3] - v[1]; //(a+b+c)-(b+c)=a
  int b = v[3] - v[2]; //(a+b+c)-(c+a)=b
  int c = v[3] - v[0]; //(a+b+c)-(a+b)=c
  cout << a << " " << b << " " << c;
}