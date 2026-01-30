#include<stdio.h>

int main (){
    int num,sum=0,count=0;
    do{
        printf("Enter the numbers:");
        scanf("%d",&num);
        num!=9999?sum +=num:printf("");
        count++;
    }while(num != 9999);
    printf("the average is: %.2f\n",(float) sum/(count-1 ));
    return 0;
}