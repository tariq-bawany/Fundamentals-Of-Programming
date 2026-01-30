#include <stdio.h>
/*
The radius of a circle is input through the keyboard. Write a program to calculate the area &
circumference of the circle.
*/
int main()
{
    // variable declaration
    float radius, pi = 3.14159, area, circumference;

    // taking user input for radius
    printf("enter radius of circle:");
    scanf("%f", &radius);

    // calculating area of cirlce
    area = pi * radius * radius;
    
    // calculating circumference of cirlce
    circumference = 2 * pi * radius;

    // Printing the Area & Circumference
    printf("the area of circle is:%.3f\n", area);
    printf("the circumference of circle is:%.3f", circumference);
    return 0;
}