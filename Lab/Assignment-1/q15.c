#include<stdio.h>

int main (){
    int start,end;
    start =1;
    end = 5;
    for(int i =1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j==start || j==end){
                printf("%d",start);
            }else{
                printf(" ");
            }
        }
        printf("\n");
        if(i<3){
            start++;
            end--;
        }else{
            start--;
            end++;
        }
    }
    return 0;
}