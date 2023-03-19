
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
     data=value;
    }
};

void traverse(node *head)
{
struct node *temp;
temp=head;
cout<<temp->data<<endl;
temp=temp->next;

while(temp!=head)
{
    cout<<temp->data<<endl;
    temp=temp->next;
}

}

node *remove(node *head)
{



}


 int main()
 {
  
  node *head=new node(10);
  
  head->next=new node(10);
  head->next->next=new node(20);
  head->next->next->next=new node(40);
  head->next->next->next->next=new node(40);
  head->next->next->next->next->next=new node(10);
  head->next->next->next->next->next->next=head;
  
  traverse(head);
  //cout<<head->data;
   
 }