/*
Write a program to search for a specific element in an array and determine its index.
*/
#include<stdio.h>

int main (){
    int arr [5]= {1,2,3,4,5};
    int search_element = 4;
    for(int i=0;i<5;i++){
        if(arr[i] == search_element){
            printf("Value found at index :%d\n",i);
        }

    }
    return 0;
}