#include<stdio.h>

int main (){
    int spc=3,hl=4;
    for(int x =1;x<=7;x++){
        for(int y=1;y<=hl;y++){
            y>spc?printf("*"):printf(" ");
        }
        printf("\n");
        if(x>=4){
            spc++;
            hl--;
        }else{
            spc--;
            hl++;
        }
    }
    return 0;
}