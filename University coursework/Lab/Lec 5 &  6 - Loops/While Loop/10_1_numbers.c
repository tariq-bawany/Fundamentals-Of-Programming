#include<stdio.h>

/*
Create a program that uses a while loop to print numbers from 10 down to 1.
*/
int main (){
    int n=10;
    while (n>=1)
    {
        printf("%d\t",n);
        n--;
    }
    
    return 0;
}