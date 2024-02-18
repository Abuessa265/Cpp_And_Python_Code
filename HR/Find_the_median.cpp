#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int findMedian(vector<int>arr)
{
    sort(arr.begin(),arr.end());
    int x=arr.size();
    int median=arr[x/2];
    return median;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int result=findMedian(arr);

    cout<<result<<endl;
    
}