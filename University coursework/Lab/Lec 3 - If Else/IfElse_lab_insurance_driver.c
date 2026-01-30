#include <stdio.h>

int main()
{
    int age;
    char maritial_status, gender;
    printf("Enter age:");
    scanf("%d", &age);
    printf("Enter Maritial Status (M/U) :");
    scanf("\n%c", &maritial_status);
    printf("Enter gender (M / F):");
    scanf("\n%c", &gender);

    if (maritial_status == 'M' || maritial_status == 'm')
    {
        printf("The Driver is insured !");
    }
    else if (maritial_status == 'U' || maritial_status == 'u')
    {
        if (gender == 'M' || gender == 'm')
        {
            if (age > 30)
            {
                printf("The Driver is insured !");
            }
            else
            {
                printf("The Driver is not insured !");
            }
        }
        else if (gender == 'F' || gender == 'f')
        {
            if (age > 25)
            {
                printf("The Driver is insured !");
            }
            else
            {
                printf("The Driver is not insured !");
            }
        }
        else
        {
            printf("The Driver is not insured !");
        }
    }
    else
    {
        printf("The Driver is not insured !");
    }
    // printf("\n%c",maritial_status);
    return 0;
}