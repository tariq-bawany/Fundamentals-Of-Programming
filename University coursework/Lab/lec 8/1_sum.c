/*
Write a program that calculates the sum of elements in an array of integers.
*/
#include<stdio.h>

int main (){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(int i =0;i<size;i++){
        printf("Enter the value at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    printf("Sum : %d\n",sum);
    return 0;
}