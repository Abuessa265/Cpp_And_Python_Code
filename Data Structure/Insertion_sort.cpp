#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int insertion_sort(int ar[],int n);
int main()
{
    int i,n;
    cout<<"Enter the number of array : ";
    cin>>n;
    int ar[n];
    cout<<"Enter array value : ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    insertion_sort(ar,n);
    return 0;
}


int insertion_sort(int arr[],int n)
{
    int i,j,item;
    for(i=1;i<n;i++)
    {
        item=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>item)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=item;
    }

    cout<<"The sorted array value is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

