#include <stdio.h>
#include <stdlib.h>
struct node 
{
    struct node *left;
    struct node *right;
    int data;
};
struct node *createnode(int data)
{
  
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->left=NULL;
   newnode->right=NULL;
}

struct node *link()  
{
 struct node *temp;
 int x;
 printf("Enter the data (-1 if you don't want any new node)\n");
   scanf("%d",&x);
   if(x==-1)
   {
       return NULL;
   }
   temp=createnode(x);
   printf("Enter the details of left node of %d\n",x);
   temp->left=createnode(x);
   printf("enter the details of right node of %d\n",x);
   temp->right=createnode(x);
   return temp;
}
int main()
{
    struct node* root;
    root=NULL;
    root=link();

}