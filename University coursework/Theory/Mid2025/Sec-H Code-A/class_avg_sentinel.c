#include<stdio.h>
/*
Enter grade -1 to end:2
Enter grade -1 to end:4
Enter grade -1 to end:6
Enter grade -1 to end:8
Enter grade -1 to end:10
Enter grade -1 to end:-1
Class Average is 6.00
*/
int main (){
    int num,sum=0,count=0;
    do{
        printf("Enter grade -1 to end:");
        scanf("%d",&num);
        if(num!=-1){
            sum+=num;
            count++;
        }
    }while(num!=-1);
    printf("Class Average is %.2f",(float) sum/count);
    return 0;
}