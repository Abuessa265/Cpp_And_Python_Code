#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


class Triangle{
  public:
        void triangle()
        {
          cout<<"I am a triangle\n";
        }
};
class Isoscelse :public Triangle{
  public:
        void isoscelse()
        {
          cout<<"I am an isosceles triangle\n";
        }
        void description()
        {
          cout<<"In an isosceles triangle two sides are equal\n";
        }

};
int main()
{
  Isoscelse isc;
  isc.isoscelse();
  isc.description();
  isc.triangle();
  return 0;
}