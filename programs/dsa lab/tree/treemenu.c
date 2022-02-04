#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    struct node *right;
    int data;
};
struct stack
{
    int size;
    int top;
    struct node *array[100];
};
int isempty(struct stack *st)
{
    return st->top==-1;
}
int isfull(struct stack *st)
{
    return st->top==st->size-1;
}
struct node *peek(struct stack s)
{
    return s.array[s.top];
}
void push(struct stack *st,struct node *data)
{
    if(!isfull(st))
    {
        st->top++;
        st->array[st->top]=data;
    }
    else
    {
        printf("stack overflow \n");
    }
}
struct node *pop(struct stack *st)
{
    if(!isempty(st))
    {
       struct node *temp=st->array[st->top];
       st->top--;
       return temp;
    }
    else{
        printf("Stack underflow\n");
        return NULL;
    }
}
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
void preorderiter(struct node *root){
    if(root == NULL)
        return;
    struct stack st;
    st.top = -1;
    st.size = 100;
    push(&st, root);
    while(!isempty(&st))
    {
        struct node *temp = pop(&st);
        printf("%d ", temp->data);
        if(temp->right)
            push(&st, temp->right);
        if(temp->left)
            push(&st, temp->left);
    }
}
void postorderiter(struct node *root){
    if(root == NULL)
        return;
    struct stack st;
    st.top = -1;
    st.size = 100;
    do
    {
        while(root)
        {
            if(root->right)
            push(&st,root->right);
            push(&st,root);
            root=root->left;
        }
    root=pop(&st);
    if(root->right&&peek(st)==root->right)
    {
        pop(&st);
        push(&st,root);
        root=root->right;
    }
    else{
        printf("%d ",root->data);
        root=NULL;
    }}
    while(!isempty(&st));
    
}
void inorderiter(struct node *root )
{
   if(root==NULL)
   {
       return;
   } 
   struct stack st;
    st.top = -1;
    st.size = 100;
    struct node *current=root;
    int count=1;
    while(count)
    {
        if(current)
        {
            push(&st,current);
            current=current->left;
        }
        else
        {
            if(!isempty(&st))
            {
                current=pop(&st);
                printf("%d",current->data);
                current=current->right;
            }
            else
            count=0;
        }
    }}
    
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
    int a,b,c;
    printf("\nEnter\n1 for Recurssion \n2 for iterative\n ");
        scanf("%d",&a);
       switch(a)
    {
        case 1:
        { 
            do
            {
                printf("\nEnter\n1 for post order traversal \n2 for in order traversal \n3 for pre order traversal\n");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    {
                        printf("\nPost order traversal : \n");
                        postorder(root);
                        break;
                    }
                    case 2:
                    {
                        printf("\nIn order traversal : \n");
                        inorderiter(root);
                        break;
                    }
                    case 3:
                    {
                         printf("\nPre order traversal : \n");
                         preorder(root);
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
                 printf("\nEnter\n1 for post order traversal \n2 for in order traversal \n3 for pre order traversal\n");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    {
                        printf("\nPost order traversal : \n");
                        postorderiter(root);
                        break;
                    }
                    case 2:
                    {
                        printf("\nIn order traversal : \n");
                        inorder(root);
                        break;
                    }
                    case 3:
                    {
                         printf("\nPre order traversal : \n");
                         preorderiter(root);
                         break;
                    }
                    }
            } while (c);
            break;
        }}
        while(a);
    return 0;
}