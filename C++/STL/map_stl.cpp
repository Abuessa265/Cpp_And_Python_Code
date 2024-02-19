#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<int, int> mp, mp7; // 1st int is key and 2nd int is value
  mp.insert({1, 11});
  mp.insert({20, 22});
  mp.insert({6, 66});
  mp.insert({3, 33});
  mp.insert({4, 44});
  mp[5] = 55;

cout<<"mp is :"<<endl;

for (auto it: mp)
{
  cout<<it.first<<" "<<it.second<<endl;
}
cout<<endl;

  cout << mp[3] << endl;
  cout << mp.at(4) << endl;

  // mp.swap(mp7); swap evabe korte hoi

  // count function
  int cnt = mp.count(10); // 10 is key
  cout << cnt << endl;    // key ta map er modde thakle 1 ar na thakle 0 print korbe

  // lower_bound
  auto a = mp.lower_bound(10); // jodi key ta map er modde thake tahole oi key & value print korbe ar jodi key na thake kintu key er ceye boro key thake tahole boro ta print korbe ar jodi key er caye boro key na thake tahole garvage value print korbe
  cout << "The lower bound key and value is : " << (*a).first << " " << (*a).second << endl;

  // upper bound
  auto b = mp.upper_bound(3);
  cout << "The upper bound key and value is : " << (*b).first << " " << (*b).second << endl;

  // find function
  auto x = mp.find(2); // 2 is key
  if (x != mp.end())
    cout << "Find" << endl;
  else
    cout << "Not find" << endl;

  // mp.clear();
  if (mp.empty())
    cout << "Empty" << endl;
  else
    cout << "Not Empty" << endl;

  cout << "Size of map : " << mp.size() << endl;
  cout << "Size of max_size of map  : " << mp.max_size() << endl;

  // mp.erase(1);  // how to erase in in this map

  for (auto it : mp)
  {
    cout << it.first << " " << it.second << endl;
  }

  cout << "Print By iterator :" << endl;
  map<int, int>::iterator it;
  for (it = mp.begin(); it != mp.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }

  // another map declaration
  map<int, string> mp1;
  mp1.insert({1, "Abuessa"});
  mp1.insert({3, "Essa"});
  mp1.insert({2, "Musa"});
  mp1[6] = "Sabit";
  cout << endl;
  for (auto it : mp1)
  {
    cout << it.first << " " << it.second << endl;
  }
  cout << endl;

  map<string, int> mp2;
  mp2.insert({"ab", 77});
  mp2.insert({"ac", 33});
  mp2.insert({"ad", 44});
  mp2.insert({"aa", 66});
  mp2["af"] = 101;

  for (auto it : mp2)
  {
    cout << it.first << " " << it.second << endl;
  }

  return 0;
}