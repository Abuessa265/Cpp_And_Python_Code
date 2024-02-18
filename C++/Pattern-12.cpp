#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

// ei line e just space print korbe
// *
// **
// ***
// ****
// ***
// **
// *

int main()
{
  int n,row,col;
  cout<<"Enter any Numbe : ";
  cin>>n;

  for(row=0;row<n;row++)
  {
    for(col=0;col<row;col++)//first line e star print korbe na
    {
      cout<<"*";
    }
    cout<<endl;
  }
  //double pattern

  for(row=0;row<n;row++)
  {
    for(col=0;col<n-row;col++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  getch();
}