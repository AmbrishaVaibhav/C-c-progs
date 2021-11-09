#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* enter(struct node** head,int data)
{
      struct node* newnode = (struct node*)malloc(sizeof(struct node));
      newnode->data=data;
      newnode->next=*head;
      *head=newnode;
      return (*head);
}
void end(struct node* head,int data)
{
      struct node* newnode = (struct node*)malloc(sizeof(struct node));
      newnode->data=data;
      while(head!=NULL)
      {
       (head) =(head)->next;
       (head)->next=newnode;
}
newnode->next=NULL;
(head)->next=newnode;
return;
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
struct node *enter(struct node* head,int place)
{
    struct node* in = (struct node*)malloc(sizeof(struct node));
    struct node* temp = NULL;
    struct node* temp2 = head;
    if(place<1&&place>countc(head));
    {
        printf("wrong");
        return head;
    }
  else
  {
      for(int i=0;i<place;i++)
      {
         temp=temp2;
         temp2->temp->next;

      }
  }
}