#include<stdio.h>
/*
Design a program to print a half diamond pattern of asterisks. The user provides the number of
rows for the pattern. 
*/
int main (){
    int values =1,rows;
    printf("Enter the rows:");
    scanf("%d",&rows);
    for(int x =1;x<=(rows*2)-1;x++){
        // printf("%d",values);
        for(int y =1;y<=values;y++){
            printf("*");
        }
        printf("\n");
        if(x<rows){
            values++;
        }else{
            values--;
        }
    }
    return 0;
}