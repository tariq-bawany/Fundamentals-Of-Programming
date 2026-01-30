#include<stdio.h>
int main (){
    int arr[10] = {1,2,3,4,9,5,6,7,8,12}; // array declaration and assigment
    int *arrPtr = arr; // pointer variable of arr
    int largest = *arrPtr; // assuming the 1st element of arr as largest
    int size = sizeof(arr) / sizeof(arr[0]); // total size / length of array
    for(int i =0;i<size;i++){ // loops till the end of arr
        if((*arrPtr+i)>largest){ // checks if element at that index in arr is greater than largest
            largest = *(arrPtr+i); // if yes stores that element in largest
        }
    }
    printf("Largest number : %d\t",largest);// printing the largest number
    return 0;
}