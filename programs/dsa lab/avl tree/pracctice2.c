#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int hight;
};
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int hight(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->hight;
}
struct node *createnode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->hight = 1;
    return (newnode);
}
struct node *rightrotate(struct node *root)
{
    struct node *temp = root->left;
    struct node *temp2 = temp->right;
    temp->right = root;
    root->left = temp2;
    root->hight = max(hight(root->left), hight(root->right))+1;
    temp->hight = max(hight(temp->left), hight(temp->right))+1;
    return temp;
}
struct node *leftrotate(struct node *root)
{
    struct node *temp = root->right;
    struct node *temp2 = temp->left;
    temp->left = root;
    root->right = temp2;
    root->hight = max(hight(root->left), hight(root->right))+1;
    temp->hight = max(hight(temp->left), hight(temp->right))+1;
    return temp;
}
int balancefactor(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return hight(root->left) - hight(root->right);
}
struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        return (createnode(data));
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
        return root;
    root->hight = 1 + max(hight(root->left), hight(root->right));
    int diff = balancefactor(root);
    if (diff > 1 && data < root->left->data)
    {
        return rightrotate(root);
    }
    if (diff < -1 && data > root->right->data)
    {
        return leftrotate(root);
    }
    if (diff > 1 && data > root->left->data)
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }
    if (diff > 1 && data > root->left->data)
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    return root;
}
struct node *min(struct node *root)
{
    struct node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
struct node *delete (struct node *root, int data)
{

    if (root == NULL)
        return root;
    if (data < root->data)
        root->left = delete (root->left, data);

    else if (data > root->data)
        root->right = delete(root->right, data);
    else
    {

        if ((root->left == NULL) || (root->right == NULL))
        {
            struct node *temp = root->left ? root->left : root->right;

            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
                *root = *temp;

            free(temp);
        }
        else
        {

            struct node *temp = min(root->right);

            root->data = temp->data;

            root->right = delete (root->right, temp->data);
        }
    }

    if (root == NULL)
        return root;

    root->hight = 1 + max(hight(root->left),
                           hight(root->right));

    int bal = balancefactor(root);

    if (bal > 1 && balancefactor(root->left) >= 0)
        return rightrotate(root);

    if (bal > 1 && balancefactor(root->left) < 0)
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }

    if (bal < -1 && balancefactor(root->right) <= 0)
        return leftrotate(root);

    if (bal < -1 && balancefactor(root->right) > 0)
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }

    return root;
}
void preorder(struct node *root)
{
    if (root != NULL)
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
int main()
{
    struct node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 14);
    root = insert(root, 26);
    root = insert(root, 6);
    root = insert(root, 4);
    root = insert(root, 3);

    /*    10
        /    \
       5     15
      / \     / \ 
     4   6   14  25
    /
    3
    */
    printf("Pre order traversal of the avl tree is : ");
    preorder(root);
    printf("\nPost order traversal of the avl tree is : ");
    postorder(root);
    printf("\nIn order traversal of the avl tree is : ");
    inorder(root);

    root=delete(root,5);

    /*    10
        /    \
       4      15
      / \     / \ 
     3   6   14  25
    */
    printf("\nTraversal after deleting node : \n");
    printf("Pre order traversal of the avl tree is : ");
    preorder(root);
    printf("\nPost order traversal of the avl tree is : ");
    postorder(root);
    printf("\nIn order traversal of the avl tree is : ");
    inorder(root);

    return 0;
}