#include<stdio.h>
// Pg 229 || 4.16
/*  4.16 (Triangle-Printing Program) Write a program that prints the following patterns separately, one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a single printf statement of the form printf("%s",
"*"); (this causes the asterisks to print side-by-side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks.]   */
int main (){
    int num,count=1;
    printf("Enter a height for triangle: ");
    scanf("%d",&num);
    for(int x = 1 ; x<=num;x++){
        for (int y  = 1; y <=x ; y++)
        {
            printf("#");
            /* code */
        }
        count++;
        
        printf("\n");
    }
    return 0;
}