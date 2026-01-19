#include<stdio.h>

int main (){
    int start,end,val;
    printf("Enter the no of rows:");
    scanf("%d",&val);
    // val =5;
    start = end = val;
    for(int i =1;i<=val;i++){
        for (int j = 1;j<=(val*2-1);j++){
            if(j>=start && j<=end){
                if(i%2 == 0 && j%2 == 0){
                    printf("*");
                }else if(i%2 !=0 && j%2!=0){
                    printf("*");
                }else
                printf(" ");
            }else{
                printf(" ");
            }
        }
        // printf("%d\t",start);
        // printf("%d\n",end);
        printf("\n");
        start--;
        end++;
    }
    return 0;
}