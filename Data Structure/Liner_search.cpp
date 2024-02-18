#include<iostream>
using namespace std;

void LinearSearch(int ar[], int len, int item){

    for(int i=0;i<len;i++){
        if(ar[i] == item){
            cout << item << " Found at index : " << i;
            return;
        }
    }
    cout << "Not found";
    
}

int main() {
    int arr[] = {10, 5, 15, 21, -3, 7};
    
    // calculating length of array
    int len = sizeof(arr)/sizeof(arr[0]);
    
    // item to be searched
    int item;
    cout<<"Enter seach key : ";
    cin>>item;
    LinearSearch(arr, len, item);

    return 0;
}