#include <stdio.h>

int main()
{
    int marks, num;
    marks = 98;
    // num will store the first unit like 98/10 9.8 demoted to 9
    num = marks / 10;
    switch (num)
    {
    case 9:
        printf("The grade is A");
        break;
    case 8:
        printf("The Grade is B");
        break;
    case 7:
        printf("The Grade is C");
        break;
    case 6:
        printf("The Grade is D");
        break;
    default:
        printf("The Grade is Fail");
        break;
    }
    return 0;
}