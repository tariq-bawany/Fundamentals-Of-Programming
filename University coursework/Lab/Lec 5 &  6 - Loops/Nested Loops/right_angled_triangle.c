#include<stdio.h>
/*
Write a C program that uses nested loops to print a right-angled triangle pattern of asterisks. The
user should specify the number of rows for the triangle.
*/

int main (){
    int height;
    printf("Enter the triangle height:");
    scanf("%d",&height);
    for(int x =1;x<=height;x++){
        for(int y =1;y<=x;y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}