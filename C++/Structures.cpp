#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

struct details
{
  string name;
  int age;
  string address;
};

int main()
{
  details obj;
  obj.name = "Abu Essa";
  obj.age = 22;
  obj.address = "Jashore";

  details obj1;
  obj1.name = "Mazharul Islam";
  obj1.age = 12;
  obj1.address = "Jessore";

  cout << obj.name << " " << obj.age << " " << obj.address << endl;
  cout << obj1.name << " " << obj1.age << " " << obj1.address << endl;

  getch();
}
