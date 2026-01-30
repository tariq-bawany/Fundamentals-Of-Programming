/*
Write a program that generates a right-angled triangle pattern using an array.
*/
#include <stdio.h>

int main()
{
    int num = 7;
    char arr[num][num];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i >= j)
            {
                arr[i][j] = '*';
            }
            else
            {
                arr[i][j] = ' ';
            }
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}