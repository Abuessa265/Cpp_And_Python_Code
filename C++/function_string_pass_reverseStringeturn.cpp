#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string fun(string str){
    string ss="";
    for (int i=str.length()-1;i>=0;i--)
    {
        ss+=str[i];
    }
    return ss;
}

int main(){
    string s="";
    cout<<"Enter a string : ";
    cin>>s;
    string str=fun(s);
    cout<<"everse string is : "<<str;
}