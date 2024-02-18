#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
  int n,row,col,x;
  cout<<"Enter any Number :";
  cin>>n;
  x=ceil(n/2);
  for(row=0;row<n;row++)
  {
    for(col=0;col<n;col++)
    {
      if(row==0 || col==0 || row==x || col==n-1)
      {
          cout<<"*";
      }
      else
        cout<<" ";
    }
    cout<<endl;
  }


  getch();
}