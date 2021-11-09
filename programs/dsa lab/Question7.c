#include <stdio.h>
#include <stdlib.h>

        struct details
{  
        char name[25];
        int roll;
        int age;
        float cgpa; 
        char subject[20];
};

int main()
{

    struct details *s;
    s=(struct details*)malloc(5*sizeof(struct details));
    
    for(int i=0;i<5;i++)
    {
    printf("\nEnter the details of the students %d\n", i+1);
    printf("Enter name :");
    scanf(" ");
    scanf("%[^\n]",(s+i)->name);
    printf("Enter the roll :");
    scanf("%d", &(s+i)->roll);
    printf("Enter the age :");
    scanf("%d", &(s+i)->age);
    printf("Enter cgpa :");
    scanf("%f", &(s+i)->cgpa);
    printf("Enter subject :");
    scanf(" ");
    scanf("%[^\n]",(s+i)->subject);
 }
     printf("\nThe details are\n\n");
     for(int i=0;i<5;i++)
     {
    printf("\nthe details of the students %d\n", i+1);   
    printf("Name : %s\n", (s+i)->name);
    printf("Roll : %d\n", (s+i)->roll);
    printf("age : %d\n", (s+i)->age);
    printf("CGPA : %0.2f\n",(s+i)->cgpa);
    printf("subject : %0.2f\n",(s+i)->subject);

}
    return 0;
}