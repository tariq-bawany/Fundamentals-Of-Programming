#include<stdio.h>
/*
Write a program that will print the following pattern:
1******
12*****
123****
1234***
12345**
123456*
1234567
*/
int main (){
    for(int x =1;x<=7;x++){
        for(int y = 1;y<=7;y++){
            y<=x?printf("%d",y):printf("*");
            // printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}