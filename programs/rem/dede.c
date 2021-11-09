#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *text;
    int n;
    printf("enter the limit of text : ");
    scanf("%d",&n);
    text = (char*)malloc(n*sizeof(char));
    printf("enter the text : ");
   scanf(" ");
    gets(text);
    printf("the text is : %s",*text);
    return 0;
    free(text);
}