#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t = 10;
  int *p;
  p = &t;

  cout << "Address of t variable is: " << &t << endl;
  cout << "Address of p variable is: " << p << endl;
  cout << "Value of p variable is: " << *p << endl;
  cout << "The value of t is :" << t << endl;

  string food = "Pizza";
  string *ptr;
  ptr = &food;
  cout << food << " " << &food << " " << *ptr << endl;

  *ptr = "AbuEssa";
  cout << food << " " << &food << " " << *ptr << endl;

  return 0;
}