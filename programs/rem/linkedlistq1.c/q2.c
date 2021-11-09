#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;

};
int main()
{
    struct node* one,* two,* three;

    one = (struct node*)malloc(sizeof(struct node));
    two = (struct node*)malloc(sizeof(struct node));
    three = (struct node*)malloc(sizeof(struct node));

    one->data = 10;
    one->next = two;
    two->data = 20;
    two->next = three;
    three->data = 30;
    three->next = NULL;

    printf(" %d ____  %d  _____  %d" ,one->data, two->data, three->data);
    return 0;

}