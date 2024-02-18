#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a[3][2][3]=
{
  {
    {"AA","BB","CC"},
    {"DD","EE","FF"}
  },
  {
    {"GG","HH","II"},
    {"XX","YY","ZZ"}
  },
  {
    {"QQ","TT","HH"},
    {"PP","RR","LL"}
  }
};

for(int i=0;i<3;i++)
{
  for(int j=0;j<2;j++)
  {
    for(int k=0;k<3;k++)
    cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<a[i][j][k]<<endl;
  }
}



  return 0;
}