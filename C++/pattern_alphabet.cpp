#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Enter any number : 5
// A   
// A B 
// A B C
// A B C D
// A B C D E

int main()
{
  
  int n,row,col;
  cout<<"Enter any number : ";
  cin>>n;

  int a=65;

  for(row=0;row<n;row++)
  {
    for(col=0;col<=row;col++)
    {
      cout<<char(a+col)<<" ";
    }
    cout<<endl;
  }
  return 0;
}