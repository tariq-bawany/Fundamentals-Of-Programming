#include<stdio.h>
// Q12: Create a file Numbers.txt and store 10 integers in it.

int main (){
    FILE *fptr = fopen("Numbers.txt","w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int num;
    for(int i =0;i<10;i++){
        printf("Enter Number %d:",i+1);
        scanf("%d",&num);

        fprintf(fptr,"%d\n",num);
    }
    fclose(fptr);
    return 0;
}