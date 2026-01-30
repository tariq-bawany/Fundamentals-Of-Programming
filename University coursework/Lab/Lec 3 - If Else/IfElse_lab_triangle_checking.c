#include <stdio.h>
int main()
{
    float a, b, c, sum;
    printf("Enter the first angle:");
    scanf("%f", &a);
    printf("Enter the second angle:");
    scanf("%f", &b);
    printf("Enter the third angle:");
    scanf("%f", &c);

    sum = a + b + c;
    if (sum == 180)
    {
        if (a == b && b == c)
        {
            printf("Equilateral Trianlge.");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isoceles Trianlge.");
        }
        else if (a == 90 || b == 90 || c == 90)
        {
            printf("Right angled Trianlge.");
        }
        else{
            printf("Scalene Trianlge.");
        }

        // printf(a == b && b == c ? "Equilateral Trianlge" : "");
        // printf(a == b || b == c || a == c ? "Isoceles Trianlge" : "");
        // printf(a == 90 || b == 90 || c == 90 ? "Right Angled Trianlge" : "");
        // printf(a != b || b != c || a != c ? "Scalene Triangle" : "");
    }
    else
    {
        printf("Not a valid triangle");
    }

    return 0;
}