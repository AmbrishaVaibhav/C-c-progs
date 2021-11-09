#include <stdio.h>

struct students
{
    char name_07[20];
    int roll_07;
    int marks_07[5];
    float percentage_07, total_07;
};
void display(struct students s_07[], int n_07, int b_07)
{
    int check_07 = 0;
    for (int i_07 = 0; i_07 < n_07; i_07++)
    {
        check_07 = 0;
        if (s_07[i_07].roll_07 == b_07)
        {
            printf("Name : %s\n", s_07[i_07].name_07);
            printf("Roll : %d\n", s_07[i_07].roll_07);
            for (int j_07 = 0; j_07 < 5; j_07++)
            {
                printf("Marks: %d\n", s_07[i_07].marks_07[j_07]);
            }
            printf("Total: %0.2f\n", s_07[i_07].total_07);
            printf("Percentage: %0.2f\n", s_07[i_07].percentage_07);
            check_07 = 1;
        }
    }

    if (check_07 == 0)
    {
        printf("Not found\n");
    }
}
void sornow(struct students s_07[], int n_07)
{
    int low_07;
    for (int i_07 = 0; i_07 < n_07; i_07++)
    {
        low_07 = i_07;
        for (int j_07 = i_07 + 1; j_07 < n_07; j_07++)
        {
            if (s_07[j_07].total_07 < s_07[low_07].total_07)
            {
                low_07 = j_07;
            }
            struct students temp_07;
            temp_07 = s_07[i_07];
            s_07[i_07] = s_07[low_07];
            s_07[low_07] = temp_07;
        }
    }

    for (int i_07 = 0; i_07 < n_07; i_07++)
    {

        printf("Name : %s\n", s_07[i_07].name_07);
        printf("Roll : %d\n", s_07[i_07].roll_07);
        for (int j_07 = 0; j_07 < 5; j_07++)
        {
            printf("Marks: %d\n", s_07[i_07].marks_07[j_07]);
        }
    }
}

void find(struct students s_07[], float n_07, float lower_07, int upper_07)
{
    int flag_07 = 0;
    for (int i_07 = 0; i_07 < n_07; i_07++)
    {
        flag_07 = 0;
        if (s_07[i_07].percentage_07 >= lower_07 && s_07[i_07].percentage_07 <= upper_07)
        {
            printf("Name : %s\n", s_07[i_07].name_07);
            printf("Roll : %d\n", s_07[i_07].roll_07);
            for (int j_07 = 0; j_07 < 5; j_07++)
            {
                printf("Marks: %d\n", s_07[i_07].marks_07[j_07]);
            }
            printf("Total: %0.2f\n", s_07[i_07].total_07);
            printf("Percentage: %0.2f\n", s_07[i_07].percentage_07);

            flag_07 = 1;
        }
    }
    if (flag_07 == 0)
    {
        printf("not found\n");
    }
}
void calc(struct students s_07[], int n_07)
{
    for (int i_07 = 0; i_07 < n_07; i_07++)
    {
        int sum_07 = 0;
        for (int j_07 = 0; j_07 < 5; j_07++)
        {
            sum_07 = sum_07 + s_07[i_07].marks_07[j_07];
            s_07[i_07].total_07 = sum_07;
        }
        printf("Total %d: %0.2f\n", i_07 + 1, s_07[i_07].total_07);
        s_07[i_07].percentage_07 = (s_07[i_07].total_07) / 5;
        printf("Percentage %d: %0.2f\n", i_07 + 1, s_07[i_07].percentage_07);
    }
}
int main()
{
    int num_07, no_07;
    float b_07, c_07;
    printf("enter the no of students ");
    scanf("%d", &num_07);
    struct students s_07[num_07];
    for (int i_07 = 0; i_07 < num_07; i_07++)
    {
        printf("enter the name of the student %d ", i_07 + 1);
        scanf(" %[^\n]", s_07[i_07].name_07);
        printf("enter the roll ");
        scanf("%d", &s_07[i_07].roll_07);
        printf("enter the marks of the 5 subjects\n");
        for (int j_07 = 0; j_07 < 5; j_07++)
        {
            printf("Marks %d:", j_07 + 1);
            scanf("%d", &s_07[i_07].marks_07[j_07]);
        }
    }
    calc(s_07, num_07);
    printf("Enter the roll of the student you want to search ");
    scanf("%d", &no_07);
    display(s_07, num_07, no_07);
    printf("\n");
    printf("Range of percentage ");
    printf("enter lower range ");
    scanf("%f", &b_07);
    printf("enter the upper range ");
    scanf("%f", &c_07);
    find(s_07, num_07, b_07, c_07);
    printf("Sorted value\n");
    sornow(s_07, num_07);
    return 0;
}