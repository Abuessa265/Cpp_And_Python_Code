#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


struct Node *createLinkedList(int arr[],int size);
int searchInLinkedList(struct Node *head,int value);

struct Node
{
    int data;
    struct Node *next;
};


int main()
{
int a[]={5,10,30,60,6,90};
struct Node *head=NULL;
head=createLinkedList(a,6);

// while (head !=NULL)
// {
//     cout<<head->data <<"->";
//     head=head->next;
// }
// cout<<"NULL"<<endl;

struct Node *current=head;
cout<<"Index "<<searchInLinkedList(head,600);

return 0;
}
int searchInLinkedList(struct Node *head,int value){
    int index=1;
    while(head !=NULL)
    {
        if(head->data==value){
            return index;
        }
        index++;
        head=head->next;
    }
    return -1;
}

struct Node *createLinkedList(int arr[],int size){
  struct Node *head=NULL,*temp=NULL,*current=NULL;
for (int i = 0; i < size; i++)
{
   temp=(struct Node *)malloc(sizeof(struct Node));
   temp->data=arr[i];
   temp->next=NULL;
   if(head==NULL){
    head=temp;
    current=temp;
   }
   else{
    current->next=temp;
    current=current->next; 
   }
}

return head;

}