#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  set<char> len(begin(s), end(s));
  len.size() % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
  return 0;
}