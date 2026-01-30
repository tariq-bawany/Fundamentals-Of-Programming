#include <stdio.h>
/*
Write a program to check the year entered is a leap year or not.
*/
int main()
{
    int a;
    printf("Enter a Year (eg:2000) :");
    scanf("%d",&a);
    if (a % 4 == 0 && (a % 100 != 0 || a %400 == 0 ))
    {
        printf("Congrats! %d is the leap year", a);
    }
    else
    {
        printf("this is not a leap year");
    }
    return 0;
}