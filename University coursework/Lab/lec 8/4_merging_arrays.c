#include<stdio.h>

int main (){
    int size1;
    int size2;
    printf("Enter the size of array 1:");
    scanf("%d",&size1);
    printf("Enter the size of array 2:");
    scanf("%d",&size2);

    int arr[size1];
    int arr1[size2];
    int arr2[size1+0];
    for(int i=0;i<size1;i++){
        printf("Enter the Value of array 1:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size2;i++){
        printf("Enter the Value of array 2:");
        scanf("%d",&arr1[i]);
    }

    for(int i =0;i<size1+size2;i++){
        if(i<size1){
            arr2[i] = arr[i];
        }else{
            arr2[i] = arr1[i-size1];
        }
    }
    for(int i =0;i<size1+size2  ;i++){
        printf("%d\n",arr2[i]);
    }

    return 0;
}