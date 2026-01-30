#include<stdio.h>

/*
Create a C program that defines a function power which takes two parameters, base and exponent,
and calculates the result of raising the base to the exponent. In the main function, take values for
base and exponent, call the power function, and print the result.
*/
int power(int base,int exponent);
int main (){
    int number;
    int exponent;
    int output;
    printf("Enter a base number:");
    scanf("%d",&number);
    printf("Enter a exponent number:");
    scanf("%d",&exponent);
    output = power(number,exponent);
    printf("The %d^%d is :%d\n",number,exponent,output);
    return 0;
}
int power(int base , int exponent){
    int output=1;
    for(int i =1;i<=exponent;i++){
        output *=base;
    }
    return output; 
}