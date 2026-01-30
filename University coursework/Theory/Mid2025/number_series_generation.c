#include<stdio.h>
/*
4  8 12 16 
 7 11 15 19
10 14 18 22
13 17 21 25
16 20 24 28
19 23 27 31
*/
int main (){
    int num ,value =4;
    for(int x =1;x<=6;x++){
        // num = value;
        num=value;
        for(int y =1;y<=4;y++){
            // printf("%d\t",value);
            printf("%2d ",num);
            num+=4;
        }
        printf("\n");
        value+=3;
    }
    return 0;
}