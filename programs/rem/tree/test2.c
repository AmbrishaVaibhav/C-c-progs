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
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->left = NULL;
    newnode->data = data;
    newnode->right = NULL;
    return newnode;
}

void preorder(struct node *root)
{
    if (root)
    {
        printf(" %d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root)
    {
        inorder(root->left);
        printf(" %d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ", root->data);
    }
}

int compare(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int height(struct node *root)
{
    if (!root)
        return 0;
    else
    {
        return 1 + compare(height(root->left), height(root->right));
    }
}

int nodes(struct node *root)
{
    if (!root)
        return 0;
    else
        return 1 + nodes(root->left) + nodes(root->right);
}

int main()
{
    struct node *root = createnode(1);
    struct node *left1 = createnode(2);
    struct node *right1 = createnode(3);
    struct node *left2 = createnode(4);
    struct node *right2 = createnode(5);
    struct node *left3 = createnode(6);
    struct node *right4 = createnode(7);
    
    /*TREE  
        1
      /   \
     2     3
    / \   / \
   4   5  6  7
   */

    root->left = left1;
    root->right = right1;
    left1->left = left2;
    left1->right = right2;
    right1->left = left3;
    right1->right = right4;

    printf("\nPost order traversal : \n");
    postorder(root);
    printf("\nPre order traversal : \n");
    preorder(root);
    printf("\nIn order traversal : \n");
    inorder(root);
    printf("\nHight of the tree is ");
    printf("\n%d", height(root) - 1);
    printf("\nNo of nodes in the tree is ");
    printf("\n%d", nodes(root));
}