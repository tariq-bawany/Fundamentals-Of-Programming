#include <stdio.h>

int main()
{
    int factor, i,count=10;
    factor = 1;
    for (int j = 0; j < 100; j++)
    {
        printf((j>0&& j%10==0)?"\n":"");
        (j>0&& j%10==0)?count+=10:printf("");
        for ( i = count -9; i <= count; i++)
        {
            printf("%3d x%2d=%4d |", i, factor, i * factor);
            // printf("%d",i);
        }
        printf("\n");
        factor++;
        (factor>10)?factor=1:printf("");
        
        // (j>0&& j%10==0)?i+=10:printf("");
        // printf("%d",i);
        

    }

    return 0;
}