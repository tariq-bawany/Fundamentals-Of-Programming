#include <stdio.h>
int main() {
    int num[10], largest, second_largest; // variable declaration
    printf("Enter 10 integers:\n");
    for(int i =0;i<10;i++){ // user input for 10 element through loop
        printf("Enter number %d: ",i+1); 
        scanf("%d",&num[i]);
    }
    largest = num[0]; // assigning the 1st element value in largest
    second_largest = 0; // assigning 0 to second largest
    for (int i = 0; i < 10; i++) { // loop for checking largest and second largest
        if (num[i] > largest) { // checks if element at index is greater than largest
            second_largest = largest; // if yes , stores the previous largest value in second largest 
            largest = num[i]; // stores the current index value in largest
        } 
        else if (num[i] < largest && num[i] > second_largest) { // if no, checks for num is greater then second largest
            second_largest = num[i]; // if yes stores current index value in second largest
        }
    }
    printf("\nLargest: %d\n", largest); // printing the largest
    printf("Second Largest: %d\n", second_largest); // printing the second largest
    return 0;
}