#include <stdio.h>

int main()
{
    int start = 0;
    int end = 10;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0)
            {
                (j >= 2 && j <= 4) || (j >= 6 && j <= 8) ? printf(" # "):printf("   ");
                
            }
            if(i==1){
                (j-1)%4==0?printf(" # "):printf("   ");
            }
            if (i == 2 || i == 3)
            {
                (j == 0 || j == 10)? printf(" # "):printf("   ");
            }
            if (i >= 4)
            {
                (j == start || j == end)? printf(" # "):printf("   ");
            }
        }
        if (i >= 4)
        {
            start++;
            end--;
        }
        printf("\n");
    }
    return 0;
}