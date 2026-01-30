#include<stdio.h>

/*
3       9       15      21
6       18      30      42
9       27      45      63
12      36      60      84
15      45      75      105
18      54      90      126
*/
int main (){
    int num1,num2,add;
    num1=3;
    add=6;
    for(int x =1;x<=6;x++){
        num2=num1;
        for(int y =1;y<=4;y++){
            printf("%d\t",num2);
            num2+=add;
        }
        num1+=3;
        add+=6;
        printf("\n");
    }
    return 0;
}