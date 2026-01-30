#include<stdio.h>

int main (){
    int num,a,b,c,d,sum;
printf("enter a 4 digit number:");
scanf ("%d",&num);

    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    printf("the value of a is:%d, the value of b is:%d, the value of c is:%d, the value of d is:%d ",d,c,b,a);
    sum = a+d;
    printf("the sum of the first & last digit is:%d",sum);

    return 0;
}