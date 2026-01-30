#include<stdio.h>
/*4.32 (Modified Diamond-Printing Program) Modify the program you wrote in Exercise 4.31 to read an odd number in the range 1 to 19 to specify the number of rows in the diamond. Your program should then display a diamond of the appropriate size.*/
int main (){
    printf("\n");
    int asteriks, count,middle, values_in_row,limit;
    printf("If the input is even it will increment it by 1 to make it odd !\n");
    printf("Enter the height for diamond (1-19):");
    scanf("%d",&limit);
    limit = (limit>0 && limit <20) * limit; // if the input is out of the range 1-19 , it will automatically becomes 0
    if (limit%2 == 0) // checks if the user has entered the even input , it increments it by 1,
    {
        limit++;
    }
    values_in_row = (limit/2) +1; // assigns the first row total iterations according to the height
    asteriks = middle =1;
    for ( count = 0; count < limit; count++)
    {
        for(int j =0;j<values_in_row;j++){
            j<values_in_row-asteriks?printf(" "):printf("*"); // if j < spaces, it will print spaces, else prints asteriks
        }
        if(middle<limit){ // checks for the vetical center point
            asteriks+=2;
            middle+=2;
            values_in_row++;
        }else{ // starts reversing the values from middle
            values_in_row--;
            middle+=2; 
            asteriks-=2;
        }
        printf("\n");
    }
    printf("\n");

    
    return 0;
}
/*
If the input is even it will increment it by 1 to make it odd !
Enter the height for diamond (1-19):10 (automatically becomes 11)
     *     
    ***    
   *****   
  *******  
 ********* 
***********
 ********* 
  *******  
   *****   
    ***    
     *   
*/