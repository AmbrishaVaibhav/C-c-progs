#include <stdio.h>
#include <stdlib.h>

        struct std
{  
        char name[25];
        int roll;
        float cgpa; 
};

int main()
{
    struct std *d = (struct std*)malloc(sizeof(struct std));
    printf("Enter Student details\n");
    printf("Enter name - ");
    scanf("%[^\n]", d->name);
    printf("Enter the roll - ");
    scanf("%d", &d->roll);
    printf("Enter cgpa - ");
    scanf("%f", &d->cgpa);

    printf("Student details\n");
    printf("Name : %s\n", d->name);
    printf("Roll : %d\n", d->roll);
    printf("CGPA : %0.2f\n", d->cgpa);

    free(d);
    return 0;



}


