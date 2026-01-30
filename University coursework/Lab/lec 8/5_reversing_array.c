/*
Develop a program that reverses the elements of an array.
*/
#include<stdio.h>

int main (){
    int lenght =5;
    int arr[5] = {1,2,3,4,5};
    int temp;
    for(int i =0;i<lenght/2;i++){
        temp = arr[i];
        arr[i] = arr[lenght-1-i];
        arr[lenght-i] = temp;

    }
    for(int i =0;i<lenght;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}