#include<stdio.h>
/*
    V
   UVW
  TUVWX
 STUVWXY
RSTUVWXYZ
 STUVWXY
  TUVWX
   UVW
    V
*/
int main (){
    int h = 9;
    int ascii;
    int asteriks, count,middle, values_in_row = 5;
    asteriks = middle =1;
    for ( count = 0; count < 9; count++)
    {
        ascii = 82;
        for(int j =0;j<values_in_row;j++){
            j<values_in_row-asteriks?printf(" "):printf("%c",ascii);
            // printf("%c",ascii);
            ascii++;
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