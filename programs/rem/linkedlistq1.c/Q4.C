#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*head;
};

void push(struct node** headref,int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->head = (*headref);
    (*headref)= newnode;
}

void insertafter(struct node* prefnode,int data)
{
   if(prefnode == NULL)
   {
     printf("cannot be null");
     return;
   }
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->head = prefnode->head;
    prefnode->head=newnode;
}

void end(struct node** headref,int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* last = *headref;
    newnode->data=data;
    newnode->head=NULL;
    if(*headref==NULL)
    {
        *headref=newnode;
        return;
    }
    while(last->head!=NULL)
    {
      last->head=newnode;
      return;
    }
}
void print(struct node* note)
{
    while(note !=NULL)
    {
      printf("%d",note->data);
      note = note->head;
    }
}

int main()
{
    struct node* next=NULL;
    scanf("%d",6);
    end(&next,7);
    push(&next,8);
    push(&next,10);
    push(&next,30);
    end(&next,16);
    insertafter(next->head,14);
    print(next);
    return 0;




}