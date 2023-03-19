
typedef struct node
{
int data;
struct node *next

}node;

node* getnode(int data)
{
struct node *ptr;

ptr=(node *)malloc(sizeof(node));
return node;
}

bool search(node *head,int data)
{
temp=head;
while(temp!=NULL)
{  
   if(temp->data==data)
     return 1;
   temp=temp->next;

}

}

void insert(node *head;int data)
{

    
}


int main()
{
node *head=getnode(10);
node *temp=head;
node *new=getnode(20);

temp->next=new;


}
