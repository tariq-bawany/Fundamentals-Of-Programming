#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int employee_id;
    float salary;
};

int main()
{
    struct employee e1[3];

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Name:");
        scanf("%s", e1[i].name);
        printf("Enter employee id:");
        scanf("%d", &e1[i].employee_id);
        printf("Enter Salary:");
        scanf("%f", &e1[i].salary);
        total +=e1[i].salary;
    }
    printf("The sum of all salaries is %d", total);
}