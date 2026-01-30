#include<stdio.h>

int main (){
    char character ;
    int ASCII;
    printf("Enter the Single Char:");
    scanf("%c",&character);
    ASCII =  character;
    if (ASCII>=65 && ASCII<=90){
        printf("%c is in Uppercase,%d\n",character,ASCII);
    }
    else if (ASCII>=97 && ASCII<=122){
        printf("%c is in lowercase\n",character);
    }
    return 0;
}