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
void travel(struct node *p)
{
    printf("NULL<--");
    while (p)
    {
        printf("%d<-->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void inserthead(int data)
{
    struct node *temp= create(data);
   temp->next=head;
     head->prev=temp;
    head=temp;
}
void insertend(struct node* p,int data)
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
void inindex(struct node *p,int data,int index)
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
    int no, data, i;
    printf("Enter the number of nodes : ");
    scanf("%d",&no);
    printf("The first element - ");
    scanf("%d",&data);
    a=create(data);
    head=a;
    while(no-1)
    {
    printf("The next element - ");
    scanf("%d",&data);
    a=create(data);
    struct node *head2=head;
    while(head2->next)
    {
        head2=head2->next;
    }
    head2->next=a;
    a->prev=head2;
    no--;
    }
    do
    {
   printf("Enter\n1 for Display\n2 for insertion at head\n3 for insertion at end\n4 for insertion at index\n5 for deleting head\n6 for deletion of tail\n7 for deleting at index\n0 to exit\n");
  scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            travel(head);
            break;
        }
        case 2:
        {
            int num;
            printf("the element to insert: ");
            scanf("%d", &num);
            inserthead(num);

            break;
        }
        case 3:
        {
            int num;
            printf("the element to insert: ");
            scanf("%d", &num);
            insertend(head, num);
            break;
        }
        case 4:
        {
            int num, indext;
            printf("the element to insert: ");
            scanf("%d", &num);
            printf("the index: ");
            scanf("%d", &indext);
            inindex(head, num, indext);
            break;
        }
        case 5:
        {
            deletehead();
            break;
        }
        case 6:
        {
            deleteend(head);
            break;
        }
         case 7:
        {
            int index;
            printf("the index you want to delete: ");
            scanf("%d", &index);
            deleteindex(head, index);
            break;
        }
        
        }
          } while (i);
    return 0;
} 