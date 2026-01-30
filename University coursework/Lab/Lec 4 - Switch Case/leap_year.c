/*
Create a program that checks if a year is a leap year. The program should take a year as input and use a
switch-case statement to determine whether it's a leap year or not.
*/
#include <stdio.h>

int main()
{
    int year, year2; 
    printf("Enter a year:");
    scanf("%d",&year); // stores the user input of year
    year2 = year; // stores the value of year as copy
    year2 = (year2 % 4 == 0 && (year2 % 100 != 0 || year2 % 400 == 0)); // checks condition for leap year , if true it will become 1, else it will become 0. (can be true or false only) 
    switch (year2) //switch-case condition for leap year 
    {
    case 1: // if value of year2 is 1 
        printf("Congratulations ! %d is a leap year", year);
        break;
    default: // if value of year2 is not 1 (it will always be 0) 
        printf("%d is not  a leap year", year);
        break;
    }
    return 0;
}