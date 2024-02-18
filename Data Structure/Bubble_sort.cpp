#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BubbleSort(int arr[],int n);

int main()
{
  int n;
  cout<<"Enter the number of array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter te array value : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  BubbleSort(arr,n);
  return 0;
}

int BubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}