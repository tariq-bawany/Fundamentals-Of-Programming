#include<stdio.h>

int main (){
    // int a,b,c,d,e;
    int a = 50,b = 60,c=70,d=98,e=32, max;
    max =a ;
    max = (b>max)*b + (b<=max)*max;
    max = (c>max)*c + (c<=max)*max;
    max = (d>max)*d + (d<=max)*max;
    max = (e>max)*e + (e<=max)*max;
    printf("The highest marks in the class is: %d",max);
    return 0;
}