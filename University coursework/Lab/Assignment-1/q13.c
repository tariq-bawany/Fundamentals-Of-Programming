#include <stdio.h>
int main(){
    FILE *fptr = fopen("C:\\data\\code\\C lang\\C\\Fundamentals Of Programming\\Lab\\Assignment-1\\Numbers.txt", "r"); // file pointer declaration and assignment
    int num, sum = 0; // variable declaration
    if (fptr == NULL) // checks for file existence or not 
        return 1;
    printf("Numbers Stored : ");
    while (1) // infite loop manual loop break
    {
        fscanf(fptr, "%d", &num); // reads the integer from the file
        if (feof(fptr)) // true if end of the file reached and breaks the loop
        {
            break;
        }
        printf("%d ",num);
        sum += num; // sums the number  
    }
    printf("\n");
    fclose(fptr); // closes the file 
    printf("Sum: %d\n", sum); // print the sum
    return 0;
}