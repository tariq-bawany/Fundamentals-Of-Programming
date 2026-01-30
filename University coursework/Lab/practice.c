#include <stdio.h>

int main()
{

    int k;
    int D = 0;
    printf("Enter a positive integer:");
    scanf("%d", &k);
    while (k >= 1)
    {
        k /= 10;
        D++;
    }
    for (int i = 1; i <= D; i++)
    {
        for (int j = 1; j <= D; j++)
        {
            if(i == j){
                printf("%d",1);
            }else if(i<j){
                printf("%d",2);
            }else if(i>j){
                printf("%d",3);
            }
        }
        printf("\n");
    }
    // printf("%d", D);
    return 0;
}
/*
Write a C program that performs the following two complex steps:Preparation (Digit Counting using while loop):
Prompt the user to enter a positive integer K (e.g., K=5314).
Use a while loop to count the total number of digits in K. Let this count be D.
Pattern Generation (using Nested for Loops and if-else):
Use a nested for loop to print a pattern with D rows and D columns.
The value printed at position (i, j) (Row i, Column j) should be determined by the following nested if-else logic:
If the row index i is equal to the column index j (i.e., on the main diagonal), print 1.
Else if the row index i is less than the column index j (i.e., above the main diagonal), print 2.
Else (if i is greater than j, below the main diagonal), print 3.
Example: If K=5314, the number of digits D=4. The pattern should be 4 x 4.
Expected Output for K=5314 (where D=4):
1 2 2 2
3 1 2 2
3 3 1 2
3 3 3 1
*/