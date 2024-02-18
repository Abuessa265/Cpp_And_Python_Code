#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyClass
{
public:
  void MyMethod();
};
void MyClass::MyMethod()
{
  cout << "Hello World";
}

// for car
class car
{
public:
  int speed(int maxSpeed);
};
int car::speed(int maxSpeed)
{
  return maxSpeed;
}

int main()
{
  MyClass obj;
  obj.MyMethod();
  car obj1;
  int z = obj1.speed(200);

  return 0;
}