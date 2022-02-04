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
void preOrder(struct node *root)
{
    if(root)
    {
        printf("Pre order traversal - %d \n", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct node *root)
{
    if(root)
    {
        inOrder(root->left);
        printf("In order traversal - %d \n", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if(root)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("Post order traversal - %d \n", root->data);
    }
}

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int heightTree(struct node *root)
{
    if(!root)
        return 0;
    else
    {
        return 1 + max(heightTree(root->left), heightTree(root->right));
    }
}

int nodes(struct node *root)
{
    if(!root)
        return 0;
    else
        return 1 + nodes(root->left) + nodes(root->right);
}

int main()
{
    struct node* root;
    root=NULL;
    root=createnode();
    postOrder(root);
    preOrder(root);
    inOrder(root);
    printf("Hight of the tree is \n");
   printf("\n%d", heightTree(root) - 1);
   printf("No of nodes in the tree is \n");
   printf("\n%d", nodes(root));

}