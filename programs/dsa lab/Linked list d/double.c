#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;

};
struct node *head=NULL;
struct node *create(int data)
{
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
struct node *travel(struct node *p)
{
    printf("NULL");
    while(p)
    {
       printf("%d<--> ",p->data);
       p=p->next;

    }
    printf("NULL\n");
}
struct node *inserthead(int data)
{
    struct node *temp= create(data);
   temp->next=head;
     head->prev=temp;
    temp=head;
}
struct node *inserttail(struct node* p,int data)
{
    struct node *temp = create(data);
    while(p->next)
    {
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
    temp->next=NULL;

}
struct node *index(struct node *p,int data,int index)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *s;
    if(index==1)
    {
       temp->next=head;
       head->prev=temp;
       head=temp;
    }
    else
    {
    for(int i=1;i<index;i++)
    {
        s=p;
        s=s->next;
    }
    s->next=temp;
    temp->prev =s;
    temp->next=p;
    p->prev=temp;
}}
void deletehead()
{
    struct node *temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
    

void deleteend(struct node *p)
{
    struct node *temp;
    while(p->next)
    {
        temp=p;
        p=p->next;
    }
    temp->next=NULL;
    free(p);
}
void deleteindex(struct node *p,int index)
{
    struct node *temp,*s=p->next;
    if(index==1)
    {
        temp=head;
        head=head->next;
        head->prev= NULL;
        free(temp);
    }
    else{

for(int i=1;i<index;i++)
{
    temp=p;
    p=p->next;
}
    while(p)
    {
        temp=p;
        p=p->next;
        s=s->next;
    }
    temp->next=s;
    p->prev=temp;
    }

}
int main()
{
    struct node *a;
    int no,data,index;
    printf("Enter the number of nodes : ");
    scanf("%d",&no);
    printf("The first element - ");
    scanf("%d",&data);
    a=create(data);
    head=a;
    while(no-1)
    {
        
    }

}