#include<stdio.h>
// function prototype
int fib(int n); 
int main (){
    int num; // num variable declaration
    printf("Enter the number for nth term of fibonacci series:");
    scanf("%d",&num); // user input for varaible for nth term
    for(int i=0;i<num;i++){
        //calls the fib function and prints the returned value
        printf("%d\t",fib(i));
    }
    return 0;
}
// function definition
int fib(int n){
    // when n is 1 or 0 return n 
    if(n<=1){
        return n;
    }else{
        // else it calls itself 
        return fib(n-1)+fib(n-2);
    }
}