#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>PP;
    PP.insert({101,10});
    PP.insert({202,25});
    PP.insert({303,5});
    

    int I,Q;
    int Total=0;
    cin>>I>>Q;

    auto it=PP.find(I);
    if(it!=PP.end()){
        int x=it->second;
        Total=x*Q;
        cout<<Total<<endl;
    }
    else{
        cout<<"Invalid "<<endl;
    }

}
