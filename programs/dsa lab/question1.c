#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name;
    int *roll;
    float *cgpa;

name = (char*)malloc(20 * sizeof(char));
roll = (int*)malloc(sizeof(int));
cgpa = (float*)malloc(sizeof(float));

printf("enter the student details\n");
printf("enter the name - ");
scanf("%[^\n]", name );
printf("enter the roll - ");
scanf("%d", roll );
printf("enter the cgpa - ");
scanf("%f", cgpa );

printf("Name: %s\n",  name );
printf("Roll: %d\n", *roll );
printf("Cgpa: %0.2f\n", *cgpa );



free(name);
free(roll);
free(cgpa);
return 0;

}