#include <stdio.h>
#include <stdlib.h>
struct node 
{
    struct node *left;
    struct node *right;
    int data;
};
struct node *createnode()
{
   int x;
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data (-1 if you don't want any new node)\n");
   scanf("%d",&x);
   if(x==-1)
   {
       return NULL;
   }
   newnode->data=x;
   printf("Enter the details of left node of %d\n",x);
   newnode->left=createnode();
   printf("enter the details of right node of %d\n",x);
   newnode->right=createnode();
   return newnode;
}
int main()
{
    struct node* root;
    root=NULL;
    root=createnode();

}