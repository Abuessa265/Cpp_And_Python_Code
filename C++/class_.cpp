#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyClass
{
public:
  string name;
  string pro;
  int age;
};

int main()
{
  MyClass obj1; // create an object of MyClass
  MyClass obj2;
  // access attributes and set values
  obj1.name = "MD.Abuessa";
  obj1.pro = "Student";
  obj1.age = 23;

  obj2.name = "Muzahidul Islam";
  obj2.pro = "Student";
  obj2.age = 24;
  // print values
  cout << obj1.name << " " << obj1.pro << " " << obj1.age << endl;
  cout << obj2.name << " " << obj2.pro << " " << obj2.age << endl;
  return 0;
}