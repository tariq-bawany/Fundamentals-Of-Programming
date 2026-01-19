#include<stdio.h>

int main (){
    FILE *ptr;
    ptr = fopen("example.txt","w");
    int num  = 19;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}