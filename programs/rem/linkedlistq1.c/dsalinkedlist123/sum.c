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
       printf("%d---> ",head->data);
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
int min(struct node* head)
{
    int input = head->data;
    while(head!=NULL)
    {
        if(input>head->data)
        {
            input=head->data;
            head=head->next;
        }
        return input;
    }
}
int max(struct node* head)
{
    int maxi = 0;
    while(head!=NULL)
    {
        if(maxi<head->data)
        maxi=head->data;
        head=head->next;
    }
        return maxi;
    
}

int sumc(struct node* head,int data)
{
    static int sum = 0;
    while(head!=NULL)
    {
        
       sum=sum+head->data;
       head=head->next;
    }
    return sum;
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
    }while(in-1);

    travel(head);
    printf("\nThe number of nodes : %d ",countc(head));
    printf("\nprint the min value is : %d",min(head));
    printf("\nprint the max value is : %d",max(head));
    printf("\nprint the sum value is : %d",sumc(head,data));
    return 0;


}
