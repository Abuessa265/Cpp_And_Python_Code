#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<string> vs{"I", " ", "Love", " ", "pizza", " ", ",", "\n", "but", " ", "not the", " ", "pepperoni one", " ", "."};
  map<string, string> m;
  m.insert({"I", "a"});
  m.insert({"Love", "b"});
  m.insert({"pizza", "c"});
  m.insert({",", "d"});
  m.insert({"but", "e"});
  m.insert({"not the", "f"});
  m.insert({"pepperoni one", "g"});
  m.insert({".", "h"});
  m.insert({" ", "i"});
  m.insert({"\n", "j"});

  for (int i = 0; i < vs.size(); i++)
  {
    for (auto it = m.begin(); it != m.end(); it++)
    {
      if (vs[i].compare(it->first) == 0)
      {
        cout << it->second;
      }
    }
  }

  return 0;
}