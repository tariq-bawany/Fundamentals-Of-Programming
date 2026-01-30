#include<stdio.h>
/*
Write a program to interchange values of two operands a and b.
*/
int main (){
    int a,b,temp;
    printf("Enter first Number :");
    scanf("%d",&a);
    printf("Enter seond Number :");
    scanf("%d",&b);
    temp = a;
    a=b;
    b=temp;
    printf("the alue of a is:%d and b is:%d",a,b);
    return 0;
}