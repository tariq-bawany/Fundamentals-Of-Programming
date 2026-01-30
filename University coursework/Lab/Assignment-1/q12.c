#include<stdio.h>
// Q12: Create a file Numbers.txt and store 10 integers in it.
int main (){
    FILE *fptr = fopen("C:\\data\\code\\C lang\\C\\Fundamentals Of Programming\\Lab\\Assignment-1\\Numbers.txt","w");  // file pointer declaration and assignment
    if (fptr == NULL) { // checks if the file exists or not
        printf("Error opening file!\n"); // if yes break the program
        return 1;
    }
    int num; // int variable for num
    for(int i =0;i<10;i++){  // loops for 10 integers input and storing in file 
        printf("Enter Number %d:",i+1);
        scanf("%d",&num); // user input for variable

        fprintf(fptr,"%d ",num); // stores the number in file 
    }
    fclose(fptr); // closes the file
    printf("Numbers stored successfully!\n");
    return 0;
}