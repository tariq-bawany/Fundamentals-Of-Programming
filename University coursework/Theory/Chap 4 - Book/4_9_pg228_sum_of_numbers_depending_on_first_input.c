#include<stdio.h>

/*
4.9 (Sum a Sequence of Integers) Write a program that sums a sequence of integers.
Assume that the first integer read with scanf specifies the number of values remaining to be entered. Your program should read only one value each time scanf executes. A
typical input sequence might be
5 100 200 300 400 500
*/
int main (){
    int num=0,sum=0,count=0;
    do{
        if(count ==0){
            printf("Enter a no for n times of input:");
            scanf("%d",&count);
            
        }else if(count >0){
            printf("Enter a no for n times of input:");
            scanf("%d",&num);
            count--;
        }
        sum += num;
    }while(count>0);
    printf("the total sum is:%d",sum);
    return 0;
}