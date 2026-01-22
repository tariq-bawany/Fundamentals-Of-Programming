#include <stdio.h>
// Q20: Using arrays, pointers, and functions, input student marks and find highest, lowest, and average marks.
// function prototype
void high_low_avg(int *marksArr, int n);
int main(){
    int n;
    printf("Enter the no of Students:");
    scanf("%d", &n); // user input for no of students
    int marksArr[n]; // array declaration
    printf("Enter the marks of Students:\n");
    for (int i = 0; i < n; i++)
    {
        // user input for students marks and stored it in array
        printf("Student %d:", i + 1);
        scanf("%d", &marksArr[i]);
    }
    printf("\n");
    // calling the function high_low_avg
    high_low_avg(marksArr, n);
    return 0;
}
// function definitino
void high_low_avg(int *marksArr, int n)
{
    // assigning the lowest and highest marks the 0th index value of marks array
    int lowest = *marksArr;
    int highest = *marksArr;
    int sum = 0;   // declaring sum
    float avg = 0; // declaring avg
    for (int i = 0; i < n; i++)
    {
        if (highest < *(marksArr + i))
        {
            // checks for highest marks
            highest = *(marksArr + i);
        }
        if (lowest > *(marksArr + i))
        {
            // checks for lowest marks
            lowest = *(marksArr + i);
        }
        // calculates the sum using pointer
        sum = sum + *(marksArr + i);
    }
    // averaging the sum
    avg = (float)sum / n;
    // printing the higest, lowest , avg
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);
    printf("Avg: %.2f\n", avg);
}
