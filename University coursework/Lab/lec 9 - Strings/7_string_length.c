#include<stdio.h>

//Write a program to find the length of string.
int main (){
    char str [] = "My name is Muhammad Tariq";

    // finding length without spaces 
    int count = 0;
    for(int i =0;str[i]!= '\0';i++){
        if(str[i] != 32){
            count++;
        }
    }
    printf("Total length without spaces:%d\n",count);

    // finding length with spaces 
    int counter = 0;
    for(int i=0;str[i]!= '\0';i++){
        counter++;
    }
    printf("Total length with spaces:%d\n",counter);
    return 0;
}