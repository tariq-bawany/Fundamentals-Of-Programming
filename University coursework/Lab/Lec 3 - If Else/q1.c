#include<stdio.h>

int main (){
    int n1,n2;
    n1=5;
    n2=10;
    if(n1>n2){
        printf("N1 is greater than N2");
    }else if(n1 == n2){
        printf("N1 is equal to N2");
    }else{
        printf("N1 is less than N2");
    }
    return 0;
}