#include <stdio.h>
#include <stdlib.h>
struct node *rear = NULL;
struct node *front = NULL;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *create(int data)
{
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
int isempty()
{
    
    if(front==NULL)
    {
        return 1;
    }
    else 
    return 0;
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
void insertfront(int data)
{
    struct node *n=create(data);
    n->next=front;
    front->prev = n;
    n = front;
}
void insertrear(int data)
{
    struct node *n =create(data);
    rear=n;
    n->prev = rear;
    n->next = NULL;
}
void deletefront()
{
    struct node *temp=front;
    front=front->next;
    front->prev=NULL;
    free(temp);
}
void deleterear()
{
    struct node *temp;
    temp=rear->prev;
    rear->prev->next=NULL;
}
int main()
{
int a,b,c;

    do
    {
        printf("What queue you want to perform\n");
        printf("Enter\n1 for Input restricted\n2 for output restricted\n ");
        scanf("%d",&a);
       switch(a)
    {
        case 1:
        { 
            do
            {
                printf("Enter\n1 to Insert\n2 to delete from rear\n3 delete from front\n");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    {
                       insertrear(data);
                       break;
                    }
                    case 2:
                    {
                        deleterear();
                        break;
                    }
                    case 3:
                    {
                        deletefront();
                        break;
                    }
                }
            } while (b);
            break;
        }
        case 2:
         { 
            do
            {
                printf("Enter\n1 to Insert front front\n2 to insert from rear\n3 delete from front\n");
                scanf("%d",&c);
                switch(c)
                {
                    case 1:
                    {
                       insertfront(data);
                       break;
                    }
                    case 2:
                    {
                        insertrear(data);
                        break;
                    }
                    case 3:
                    {
                        deletefront();
                        break;
                    }
                }
            } while (c);
         }
         break;
    }}while(a);
    return 0;
}

        
            