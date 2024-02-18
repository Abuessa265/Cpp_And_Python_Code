#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class person
{
public:
  string name;
  int age;
  void display1()
  {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
  }
};

class student : public person
{
public:
  int id;
  void display2()
  {
    cout << "Id : " << id << endl;
    display1();
  }
};

int main()
{
  student obj;
  obj.id = 265;
  obj.name = "Abuessa";
  obj.age = 23;
  obj.display2();
}