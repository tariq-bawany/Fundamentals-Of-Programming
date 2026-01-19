#include<stdio.h>
// Find the largest number in an array using pointers.
int main (){
    int arr[] = {1,2,3,4,9,5,6,7,8,'\0'};
    int i=0;
    int *arrPtr = arr;
    int largest = arr[0];
    while(*(arrPtr+i)!='\0'){
        if((*arrPtr+i)>largest){
            largest = *(arrPtr+i);
        }
        // printf("%d\n",*(arrPtr+i));
        i++;
    }
    printf("%d\t",largest);
    return 0;
}