#include<stdio.h>

int main (){
    printf("\n");
    int asteriks, count,middle, values_in_row = 5;
    asteriks = middle =1;
    for ( count = 0; count < 9; count++)
    {
        // printf("%d \t",asteriks);
        // printf("%d \t",middle);
        // printf("%d \n",values_in_row);
        for(int j =0;j<values_in_row;j++){
            // printf("*");
            j<values_in_row-asteriks?printf(" "):printf("*");
        }
        if(middle<9){
            asteriks+=2;
            middle+=2;
            values_in_row++;
        }else{
            values_in_row--;
            middle+=2;
            asteriks-=2;
        }
        printf("\n");
    }
    printf("\n");

    
    return 0;
}