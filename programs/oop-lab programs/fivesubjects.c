#include <stdio.h>

struct students
{
    char name_07[50];
    int roll_07;
    int marks_07[5];

};

int main()

{
    struct students a;
    int i_07;
    printf("enter the name of the student : ");
    scanf("%s", a.name_07);
    printf("enter the roll of the student : ");
    scanf(" %d", &a.roll_07);
   
    for(i_07=0;i_07<5;i_07++)
    {
      printf("enter the marks %d :",i_07+1);
      scanf("%d", &a.marks_07[i_07]);
    }
   printf("\nDisplay the details\n");
   printf("Name: %s\n", a.name_07);
   printf("Roll: %d\n", a.roll_07);
   for(i_07=0;i_07<5;i_07++)
    printf("Marks %d: %d\n",i_07+1, a.marks_07[i_07]);
   return 0; 

}