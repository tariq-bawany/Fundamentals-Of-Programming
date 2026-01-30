#include<stdio.h>

int main (){
    int num =10,count;
    count = num;
    for (int x = num ;x>=1;x--){
        for(int y = count;y>=1;y--){
            printf("#");
        }
        count--;
        printf("\n");
    }
    return 0;
}