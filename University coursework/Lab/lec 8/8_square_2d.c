/*
Create a program to print a square pattern using an array.
*/
#include<stdio.h>

int main (){
    char arr [3][3];
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            arr[i][j] = '#';
            printf("%c",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}