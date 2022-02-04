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
struct node *createtree()
{
    int x;
   printf("Enter the data (-1 if you don't want any new node)\n");
   scanf("%d",&x);
   if(x==-1)
   {
       return NULL;
   }
   struct node *newnode=createnode(x);
   newnode->data=x;
   printf("Enter the details of left node of %d\n",x);
   newnode->left=createtree();
   printf("enter the details of right node of %d\n",x);
   newnode->right=createtree();
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
int search(struct node *root,int key)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->data==key)
    {
       return root->data;
    }
    else if(root->data>key)
    {
        return search(root->left,key);
    }
    else if(root->data<key)
    {
        return search(root->right,key);
    }
    else 
    {
        return 1;
    }
}
int searchmin(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}
int searchmax(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}
int leafnodes(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->right==NULL &&root->left==NULL)
    {
        return 1;
    }
    else
    {
        return leafnodes(root->right)+leafnodes(root->left);
    }
}
int nodes(struct node *root)
{
    if (!root)
        return 0;
    else
        return 1 + nodes(root->left) + nodes(root->right);
}
int sum(struct node *root)
{
    if (!root)
        return 0;
    else
        return (root->data + sum(root->left) + sum(root->right));
}
int isBST(struct  node* root)
{
    struct node *temp = NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(temp!=NULL && root->data<=temp->data){
            return 0;
        }
        temp = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int depth(struct node *root)
{
    if (!root)
        return 0;
    else
    {
        int lf=depth(root->left);
        int rg=depth(root->left);
        if(lf>rg)
        {
            return (lf+1);
        }
        else 
        {
            return (rg+1);
        }
    }
}

int main()
{
    struct node* root;
    root=NULL;
    root=createtree();
    printf("\nPost order traversal : \n");
    postorder(root);
    printf("\nPre order traversal : \n");
    preorder(root);
    printf("\nIn order traversal : \n");
    inorder(root);
    int key;
    printf("\nEnter the element you want to search \n");
    scanf("%d",&key);
    if(search(root,key)==0)
    {
        printf("Tree is empty\n");
    }
    else if(search(root,key)==1)
    {
        printf("key not found\n");
    }}
    else
    {
        printf("Key is found\n");
    }
    int min;
    min=searchmin(root);
    printf("The least element is %d \n",min);
    int max;
    max=searchmax(root);
    printf("The greatest element is %d \n",max);
    int node;
    node=nodes(root);
    printf("No of nodes in the tree : %d\n",node);
    int leaf;
    leaf=leafnodes(root);
    printf("No of leaf nodes in the tree : %d \n",leaf);
    int nonleaf;
    nonleaf=node-leaf;
    printf("No of non leaf nodes in the tree : %d \n",nonleaf);
    int total;
    total=sum(root);
    printf("Sum of all the nodes in the tree : %d \n",total);
    int dep;
    dep=depth(root);
    printf("The depth of the tree : %d \n",dep);
    if(isBST(root)){
        printf("This is a BST" );
    }
    else{
        printf("This is not a BST");
    }
    return 0;
    

} 