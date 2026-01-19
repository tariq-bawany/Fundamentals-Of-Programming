#include<stdio.h>
// Q9: Write a function that returns 1 if a number is prime, otherwise 0.
int primeNum(int n);
int main (){
    int num1 ;
    printf("Enter the number:");
    scanf("%d",&num1);
    printf("%d",primeNum(num1));
    return 0;
}
int primeNum(int n){
    int div = 2;
    // printf("Sample: %d\t %d\n",n,div);
    while(n>0){
        if(n==div){
            return 1;
        }
        if(n%div==0 && n!=div){
            n/=2;
            return 0;
        }else{
            // printf("%d\t %d\n",n,div);
            // n/=2;
            div++;
        }
    }
}