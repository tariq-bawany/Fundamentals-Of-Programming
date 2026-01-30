/*
Question B1: Array Element Reversal using Only Pointers(Topics: Pointers, Arrays, for Loop, Swapping Logic)
Write a C program that:
Asks the user for the size of an integer array (N, assuming N < 10).
Takes N integer elements as input from the user and stores them in an array.
Crucial Constraint: Reverses the array in place (without using a second array) by defining two pointers: start_ptr pointing to the first element and end_ptr pointing to the last element.Uses a while loop to swap the values pointed to by the two pointers, moving them towards the center until they cross or meet.Prints the final reversed array.
*/
#include<stdio.h>

int main (){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    int *start_ptr = arr; 
    int *end_ptr = &arr[size-1]; 
    for(int i=0;i<size;i++){
        printf("Enter the value at index %d\n",i);
        scanf("%d",&arr[i]);
    }
    int count=0;
    int temp;
    while(count< size/2){
            temp = *start_ptr;
            *start_ptr = *end_ptr;
            *end_ptr = temp;
            start_ptr++;
            end_ptr--;
            count++;
    }
    for(int i=0;i<size;i++){
        printf("the value at index is : %d\n",arr[i]);
    }
    return 0;
}