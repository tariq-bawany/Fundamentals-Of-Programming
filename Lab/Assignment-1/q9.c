#include<stdio.h>
int primeNum(int n); // primeNum function declaration
int main (){
    int num1 ;
    printf("Enter the number:"); // user input for num
    scanf("%d",&num1);
    int returnedValue = primeNum(num1); // calling PrimNum and storing returned value (1 OR 0)
    printf("Function Returned: %d\n",returnedValue); // printing the returned value
    if(returnedValue ==1) printf("The number is Prime Number "); // if returned value is 1 print Prime Number
    else printf("The number is not Prime Number"); // if returned value is not 1 print Not a Prime Number
    return 0;
}
int primeNum(int n){
    int div = 2; // starting divisor 
    while(n>0){ // loops till number is greater than 0
        if(n==div){ // checks if n == div
            return 1; // if yes returned 1 (means Prime Number)
        }
        if(n%div==0 ){ // checks if n is divisble by div 
            return 0; // if yes returns 0 (it is run after n==div so if top condition is false then it is run means not a prime number)
        }else{
            div++; // if not increment div by 1
        }
    }
}