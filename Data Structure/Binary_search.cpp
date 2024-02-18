#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int ar[], int len, int key){

    int left=0,right=len-1,mid;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(ar[mid]==key)
        {
            return mid;
        }
        if(ar[mid]<key)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
    
}

int main(void) {
    int arr[] = {10, 15, 20, 25, 30, 35};
    
    // calculating length of array
    int len = sizeof(arr)/sizeof(arr[0]);
    
    // key to be searched
    int key;
    cout<<"Enter seach key : ";
    cin>>key;
    BinarySearch(arr, len, key);
    int result=BinarySearch(arr,len,key);
    if(result==-1)
    {
        cout<<key <<" is not found.";
    }
    else
    {
        cout<<key<<" is found and at index "<<result<<" in the array.";
    }

    return 0;

}