#include<stdio.h>

// 1    2   3   4   #   6   7   8   9
// 1    2   3   #   #   #   7   8   9
// 1    2   #   #   #   #   #   8   9
// 1    #   #   #   #   #   #   #   9
// #    #   #   #   #   #   #   #   #
int main (){
    int height = 5 ,space =4,count=5;
    for(int x = 1;x<=height;x++){
        for(int y =1; y<= count;y++){
            y>space?printf("#"):printf(" ");
        }
        space--;
        count++;
        printf("\n");
    }
    return 0;
}