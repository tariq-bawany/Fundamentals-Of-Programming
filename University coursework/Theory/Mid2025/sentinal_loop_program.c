#include<stdio.h>
/*
Q:1 Sentinel Loop Program    
Write a program that repeatedly takes input of four numbers from the user.
The program should continue executing until the sum of those four numbers equals 100.
Use a sentinel-controlled loop to achieve this functionality.
*/
int main (){
    int sum=0,num;
    do{
        for(int x=1;x<=4;x++){
            printf("Enter %d Number:",x);
            scanf("%d",&num);
            sum+=num;
        }
        if(sum==100)printf("sum = 100, Program ended\n");
        else printf("sum is not equal to 100\n");
    }while(sum!=100);
    return 0;
}

// int main(){
    
// }
