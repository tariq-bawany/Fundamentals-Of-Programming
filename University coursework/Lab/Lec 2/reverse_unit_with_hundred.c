#include<stdio.h>
/*
Write a program to reverse the unit with hundred in a five digit number. (Take user input)
*/
int main (){
    int num;
    printf("Enter a 5 digit number:");
    scanf("%d",&num);
    int u,t,h,th,tth;
    u = (num%10);
    t = (num/10)%10;
    h = (num/100)%10;
    th = (num/1000)%10;
    tth = (num/10000);
    u =u+h;
    h=u-h;
    u=u-h;
    printf("%d%d%d%d%d",tth,th,h,t,u);
    return 0;
}