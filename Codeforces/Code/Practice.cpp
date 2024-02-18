#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
};

int main(){
    //initially pointer type variable NULL
    struct Node *a= NULL;
     struct Node *b=NULL;
      struct Node *c=NULL;
    
    //memorite blank jaiga memori allocate korlam
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));
     
    //Value assign
    a->data=10;
    b->data=20;
    c->data=30;
    
    //selection of whice node will come after one node
    a->next=b;
    b->next=c;
    c->next=NULL;

    while (a!=NULL)
    {
        cout<<a->data<<"->";
        a=a->next;
    }
    

    return 0;
}