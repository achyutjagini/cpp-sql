//structure-public by default
//class-private by default

//In C++, there are three access specifiers:
//public - members are accessible from outside the class->
//private - members cannot be accessed (or viewed) from outside the class->
//protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes->

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int value)
    {
     data=value;
    }
 };

void traverse(struct node *head)
{
struct node *temp;
temp=head;

while(temp)
{
    cout<<temp->data<<endl;
    temp=temp->next;
}


}

 int main()
 {
  
  struct node *head=new node(10);
  struct node *one=new node(20);
  head->next=one;
  /*
  head->next=new node(10);
  head->next->next=new node(20);
  head->next->next->next=new node(40);
  head->next->next->next->next=new node(40);
  head->next->next->next->next->next=new node(10);
  //head->next->next->next->next->next->next=head;
  */
  cout<<head->data;
   
 }
 