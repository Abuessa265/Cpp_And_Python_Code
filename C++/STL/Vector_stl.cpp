#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(11);
  v.push_back(22);
  v.push_back(33);
  v.push_back(44);
  v.push_back(55);
  v.push_back(66);
  v.push_back(77);
  v.push_back(88);

  cout << v[2] << endl;
  cout << v.at(3) << endl;
  // cout<<v[20]; its not avilable in this vector thats why its give garvage value
  //  cout << v.at(22); its out of range that whay its show that its out  of range

  cout << "Size of vector " << v.size() << endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  cout << v.front() << endl;
  cout << v.back() << endl;

  // v.clear(); // its all v vector clear
  // cout << v.size() << endl;

  if (v.empty())
    cout << "This vector is empty" << endl;
  else
    cout << "This vector is not empty" << endl;

  v.pop_back();
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  v.erase(v.begin() + 2);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  // v.erase(v.begin() + 2, v.end());
  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << " ";
  // }
  // cout << endl;

  v.insert(v.begin(), 99);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  v.insert(v.begin() + 3, 100);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  v.insert(v.begin() + 1, 3, 1);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  vector<int> v1;
  v1.push_back(101);
  v1.push_back(102);
  v1.push_back(103);

  swap(v, v1);
  cout << "After swaping" << endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  //  iterator time complexity komai
  vector<int>::iterator it;
  for (it = v1.begin(); it != v1.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}