#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int N,years,days,monts;
   
   cout<<"Please Enter The Number(NUM):";
   cin>>N;
   years=N/365;
   monts=(N%365)/30;
   days=((N%365)%30)%7;
   cout<<days<<" days "<<monts<<" monts "<<days<<" days";

  return 0;
}