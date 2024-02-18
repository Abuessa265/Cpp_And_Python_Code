#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
   double x1,y1,x2,y2,a,b;
   cout<<"Please Enter The Value(x1 y1): ";
   cin>>x1>>y1;
   cout<<"Please Enter The Value(x2 y2): ";
   cin>>x2>>y2;
   a=x2-x1;
   b=y2-y1;
   cout<<"Distance Value is:"<<sqrt((pow(a,2)+pow(b,2)));

  return 0;
}
