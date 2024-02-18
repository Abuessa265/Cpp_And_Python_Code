#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void myFunction(string s = "abc ", int age = 23)
{
  cout << s << age << endl;
}
int add(int x, int y)
{
  return x + y;
}
void swap(int &x, int &y)
{
  int s;
  s = x;
  x = y;
  y = s;
}
void arrayFunc(int x[5])
{
  for (int i = 0; i < 5; i++)
  {
    cout << x[i] << " ";
  }
  cout << endl;
}
int plusFunInt(int x, int y)
{
  return x + y;
}
double plusFuncDouble(double x, double y)
{
  return x + y;
}
int rec(int z)
{
  if (z > 0)
  {
    return z + rec(z - 1);
  }
}

int main()
{
  myFunction("Abuessa ", 20);
  myFunction("Mazharul ", 21);
  myFunction("Jakarea ", 22);
  myFunction("Rohim ", 24);
  myFunction();

  int z = add(20, 25);
  cout << z << endl;
  int x = 10, y = 9;
  cout << "Before swap " << x << " " << y << endl;
  swap(x, y);
  cout << "After swap " << x << " " << y << endl;

  int array[5] = {1, 2, 3, 4, 5};
  arrayFunc(array);

  int n1 = plusFunInt(1, 2);
  double n2 = plusFuncDouble(1.22, 2.22);
  cout << "int value is = " << n1 << endl
       << "Double value is = " << n2 << endl;

  // recursion
  int result = rec(10);
  cout << result << endl;
  return 0;
}