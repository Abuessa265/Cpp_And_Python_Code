#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s1,s;
        cin>>s1>>s;
        int ans=0;
        for(int i=1;i<s.size();i++)
        {
            ans=ans+abs((int)s1.find(s[i])-(int)s1.find(s[i-1]));
        }
        cout<<ans<<"\n";
    }
}