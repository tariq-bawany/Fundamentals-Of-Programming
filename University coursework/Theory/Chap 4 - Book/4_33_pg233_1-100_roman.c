#include <stdio.h>
/*
4.33 Page-233 (Roman-Numeral Equivalent of Decimal Values) Write a program that prints a table of the Roman-numeral equivalents for the decimal numbers in the range 1 to 100. 
*/
// X =10 || C =100 || L =50 ||
int main()
{
    int num = 0, sprt = 0;
    for (int i = 1; i <= 100; i++)
    {
        num = i;
        printf("%3d = ", i);
        while (num >= 1)
        {
            if (num >= 100)
            {
                printf("C");
                num -= 100;
            }
            else if (num >= 90)
            {
                printf("XC");
                num -= 90;
            }
            else if (num >= 50)
            {
                printf("L");
                num -= 50;
            }
            else if (num >= 40)
            {
                printf("XL");
                num -= 40;
            }
            else if (num >= 10)
            {
                printf("X");
                num -= 10;
            }
            else if (num >= 9)
            {
                printf("IX");
                num -= 9;
            }
            else if (num >= 5)
            {
                printf("V");
                num -= 5;
            }
            else if (num >= 4)
            {
                printf("IV");
                num -= 4;
            }
            else if (num >= 1)
            {
                printf("I");
                num -= 1;
            }
        }
        printf("\n");
    }
    // printf("%d",num/10);
    return 0;
}