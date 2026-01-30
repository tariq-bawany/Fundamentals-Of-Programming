#include<stdio.h>
/*
Write a program to find unit, ten, hundred, thousand, and ten thousands in a five digit number.
Also calculate sum of the five digits.
*/
int main (){
    int u,t,h,th,tth,value, sum;
    // value =12345;
    printf("Enter the 5 digit number:");
    scanf("%d",&value);
    u = value%10;
    t = (value/10)%10;
    h = (value/100)%10;
    th = (value/1000)%10;
    tth = (value/10000);
    sum=u+t+h+th+tth;
    printf("%d",sum);
    return 0;
}