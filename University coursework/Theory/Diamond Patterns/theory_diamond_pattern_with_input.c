#include<stdio.h>

int main (){
    printf("\n");
    int asteriks, count,middle, values_in_row,limit;
    printf("If the input is even it will increment it by 1 to make it odd !\n");
    printf("Enter the no of rows for asteriks diamond shape:");
    scanf("%d",&limit);
    if (limit%2 == 0)
    {
        limit++;
        /* code */
    }
    values_in_row = (limit/2) +1;
    // printf("%d\n",limit);
    asteriks = middle =1;
    for ( count = 0; count < limit; count++)
    {
        // printf("%d \t",asteriks);
        // printf("%d \t",middle);
        // printf("%d \n",values_in_row);
        for(int j =0;j<values_in_row;j++){
            // printf("*");
            j<values_in_row-asteriks?printf(" "):printf("*");
        }
        if(middle<limit){
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