#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
private:
  string name;

public:
  void setName(string x)
  {
    name = x;
  }
  string getName()
  {
    return name;
  }
};

int main()
{
  student s;
  s.setName("Abu Essa");
  cout<<s.getName();
}