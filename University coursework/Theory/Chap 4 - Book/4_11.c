#include<stdio.h>

/*
4.11 (Find the Smallest) Write a program that finds the smallest of several integers.
Assume that the first value read specifies the number of values remaining.
*/
int main (){
    int num = 0,count = 0,small,i=0;
    do{
        if (i == 0){ // first input will be assigned to count
            printf("Enter a no for total no of inputs:"); // count determines the total remaining input
            scanf("%d",&count);
        }else if(i>0){
            printf("Enter a number:");
            scanf("%d",&num);
            i == 1?small =num:printf(""); // first value input will be assigned to count
            num<small?small = num:printf(""); // if num < small ==> small=num
        }
        i++;
    }while(i<=count);
    printf("smallest number: %d",small);
    return 0;
}