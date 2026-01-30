/*
Question B2: Array Traversal and Conditional Summation using Pointer Arithmetic(Topics: Pointers, Arrays, for Loop, if-else)
Write a C program that:Initializes an integer array A of size 10 with pre-defined values (e.g., A = \{10, 5, 22, 11, 30, 17, 4, 1, 9, 3\}).
Initializes a pointer traverse_ptr to point to the start of the array A.
Crucial Constraint: Uses a single for loop to traverse the entire array using only pointer arithmetic (i.e., using traverse_ptr++ and *traverse_ptr).
Inside the loop, use conditional statements (if-else) to check if the value pointed to by traverse_ptr is:
Odd and greater than 10: 
    Add the value to Odd_Sum.
Even and less than 20: 
    Add the value to Even_Sum.
Print the final values of Odd_Sum and Even_Sum.
*/

#include<stdio.h>

int main (){
    int A [10] = {10,5,22,11,30,17,4,1,9,3};
    int* traverse_ptr =A;
    int Odd_Sum = 0;
    int Even_Sum = 0;
    for(int i =0;i<10;i++){
        if(*traverse_ptr%2!=0 && *traverse_ptr>10){
            Odd_Sum+=*traverse_ptr;
        }else if(*traverse_ptr%2==0 && *traverse_ptr<20){
            Even_Sum+=*traverse_ptr;
        }
        traverse_ptr++;
    }
    printf("Odd Sum: %d\n",Odd_Sum);
    printf("Even Sum: %d\n",Even_Sum);
    return 0;
}