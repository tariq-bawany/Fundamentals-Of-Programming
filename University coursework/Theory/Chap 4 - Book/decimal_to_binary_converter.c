#include<stdio.h>

int main (){
    int num,value=128;
    printf("Enter a decimal number between 1-255:");
    scanf("%d",&num);
    num=(num>0 &&num <256) *num;
    while (num>=1)
    {
        while(value>=1){
            printf(num>=value?"1":"0");
            if(num>=value)num-=value;
            value/=2;
        }   
    }
    return 0;
}