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
    return var;
}

struct node* travel(struct node* head)
{
   while(head!=NULL)
   {
       printf("%d ",head->data);
       head=head->next;
   }
}

//recurssion methods
int countr(struct node* head)
{
    if(head == NULL)
    {
        return 0;
    }
    else
    return countr(head->next)+1;
}

int min(struct node* head)
{
    int min1;
    if(head == NULL)
    return -1;
    else
    {
        min1=min(head->next);
        return min<head->data?min:head->data;
    }}

int sum(struct node* head)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    return sum(head->next)+head->data;

}

int main()
{
    struct node* head = NULL;
    struct node* temp;
    int data,in;
    printf("enter the num of nodes : ");
    scanf("%d",&in);
    printf("Enter data in nodes: ");
    scanf("%d",&data);
    temp=create(data);
    head=temp;
    do
    {
    printf("Enter data in nodes: ");
    scanf("%d",&data);
    temp=create(data);
    struct node* temp2=head;
    while (temp2->next)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;
    in--;
    } while(in-1);

    travel(head);
    printf("\nThe number of nodes : %d ",countr(head));
    
    printf("\nthe max value is : %d",maxi(head));
    printf("\nthe sum value is : %d",sum(head));
    return 0;


}
