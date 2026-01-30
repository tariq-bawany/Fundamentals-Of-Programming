/*
Create a program to find the largest element in an array of numbers.
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
    int largest = arr[0];
    for(int i =0;i<size;i++){
        if(arr[i]>largest)largest = arr[i];
    }
    printf("Largest: %d\n",largest);
    return 0;
}