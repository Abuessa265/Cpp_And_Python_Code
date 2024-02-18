#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
  
  int n,q,s,p,a,b;
  cin>>n>>q;
  vector<int>arr[n];
  for(int i=0;i<n;i++)
  {
     cin>>s;
     for(int j=0;j<s;j++)
     {
      cin>>p;
      arr[i].push_back(p);
     }
  }
  for(int i=0;i<q;i++)
  {
    cin>>a>>b;
    cout<<arr[a][b]<<endl;
  }

return 0;
}
