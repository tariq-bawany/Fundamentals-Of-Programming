/*
Implement a recurive function Fibonacci that calculates the nth Fibonacci number. In the main  function, take an integer input (n) and print the nth Fibonacci number using the the fibonacci function.
*/
#include<stdio.h>
int fibonacci(int n){
    if(n<=1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main (){
    int n;
    printf("Enter a number for nth fibonacci series:");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        printf("%d\t",fibonacci(i));
        // printf("%d\t",i);
    }
    return 0;
}
