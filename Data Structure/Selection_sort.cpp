#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Selection_sort(int arr[],int len);
int main()
{
  int len;
  cout<<"Enter the size of array : ";
  cin>>len;
  int arr[len];
  cout<<"Enter the Element of array : ";
  for(int i=0;i<len;i++)
  {
    cin>>arr[i];
  }
  Selection_sort(arr,len);
 return 0;
}


int Selection_sort(int arr[],int len)
{
    int min,temp,j,i;
    for( i=0;i<len-1;i++)
    {
        min=i;
        for( j=i+1;j<len;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"Sorted array is accending order : ";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Sorted array is descending order : ";
    for(int i=len-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    
}