#include<stdio.h>

/*
Write a C program that uses a while loop to print all even numbers from 2 to 20.
*/
int main (){
    int n=2;
    while (n<=20)
    {
        printf("%d\t",n);
        n+=2;
    }
    
    return 0;
}