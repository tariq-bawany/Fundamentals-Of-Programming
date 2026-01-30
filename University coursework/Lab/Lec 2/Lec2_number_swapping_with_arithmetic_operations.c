#include <stdio.h>
/*
Write a program to swap numbers. (Without using the temp variables. Use Arithmetic Operators)
*/

int main()
{
    int a, b;
    printf("Enter first Number :");
    scanf("%d", &a);
    printf("Enter seond Number :");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the alue of a is:%d and b is:%d", a, b);
    return 0;
}