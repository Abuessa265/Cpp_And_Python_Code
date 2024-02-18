#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
  string food = "Orange";
  string &meal = food;
  cout << food << " " << meal << " " << &food;

  getch();
}