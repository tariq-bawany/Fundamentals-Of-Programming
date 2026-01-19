#include<stdio.h>
// Q19: Write a recursive function to print Fibonacci series up to N terms.
int fib(int n);
int main (){
    
    int num;
    printf("Enter the number for fibonacci series:");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d\t",fib(i));
    }
    return 0;
}
int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}