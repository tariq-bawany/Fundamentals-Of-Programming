#include<stdio.h>
/*
Create a program that uses a while loop to print all odd numbers from 1 to 19.
*/
int main (){
    int n=1;
    while (n<=19)
    {
        printf("%d\t",n);
        n+=2;
    }
    
    return 0;
}