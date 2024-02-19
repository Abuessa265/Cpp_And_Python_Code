#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int func(vector<int>x,int a){
    int count=0;
    for(int i=0;i<x.size();i++){
        if(x[i]==a){
            count++;
        }
    }
    return count;
}
int main(){
    int number=3;
    vector<int>LC={1,2,3,3,3,43,3,3,7};
    int count=func(LC,number);
    cout<<"The count valu  is : "<<count;

}
