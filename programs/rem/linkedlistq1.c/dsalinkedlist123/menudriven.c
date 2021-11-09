#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node* next;
};
struct node *create(int data)
{
    struct node* var = (struct node*)malloc(sizeof(struct node));
    var->data=data;
    var->next=NULL;
}

struct node* travel(struct node* head,int data)
{
   while(head!=NULL)
   {
       printf("%d",head->data);
       head=head->next;
   }
}
int countc(struct node* head)
{
   int count = 0;
   while(head!=NULL)
   {
       head=head->next;
       count++;
   }
   return count;
}
//to insert
struct node* enter(struct node** head,int data)
{
      struct node* newnode;
      newnode=(create(data));
      newnode->data=data;
      newnode->next=*head;
      *head=newnode;
      return (*head);
}

void end(struct node* head,int data)
{
      struct node* newnode;
      newnode=(create(data));
      while(head!=NULL)
      {
       (head) =(head)->next;
       (head)->next=newnode;
}
newnode->next=NULL;
(head)->next=newnode;
return;
}

struct node* index(struct node* head,int pos)
{
    struct node* newnode;
    newnode=(create(pos));
    struct node *temp=NULL;
    struct node* temp2=head;
    if(pos<1&&pos>countc(head));
    {
        printf("Wrong");
        return head;
    }
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return head;

    }
    else
    {
        for(int i=0;i<pos;i++)
        {
            temp=temp2;
            temp2=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        return head;
    }

}
