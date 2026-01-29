#include<stdio.h>

int main (){
    int start,end;
    start = 1;
    end= 9;
    for(int i = 1;i<=9;i++){
        for(int j =1;j<=9;j++){
            if(j==start){
                printf("X");
            }else if(j==end){
                printf("X");
            }else{
                printf(" ");
            }
        }
        start++;
        end--;
        printf("\n");
    }
    return 0;
}