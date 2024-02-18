#include <iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, int> mp; // 1st map ta key or index and 2nd map ta value hisebe thakbe
  mp.insert({1, 10});
  mp.insert({4, 40});
  mp[3] = 30;
  mp.insert({2, 20});
  mp[2] = 60; // always update value ta print hbe
  cout << mp[1] << endl;
  cout << mp.at(2) << endl;

  for (auto it : mp)
  {
    cout << it.first << " " << it.second << endl;
  }
  cout<< endl;
}