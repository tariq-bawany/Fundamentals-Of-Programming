#include<stdio.h>

/*
Write a C program that defines a function multiply which takes two integers as parameters and
returns their product. In the main function, take two integers as input, call the multiply function,
and print the result.
*/
int multiply (int a, int b);
int main (){
    int n1;
    int n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    int output;
    output = multiply(n1,n2);
    printf("The Multiploication of %d and %d is : %d",n1,n2,output);
    return 0;
}

int multiply(int a , int b){
    return a*b;
}