#include <stdio.h>

int main()
{
    int change = 0, coin = 0;
    int twenty_five, ten, one, five;
    twenty_five = ten = one = five= 0;
    do
    {
        printf("Change Owned:");
        scanf("%d", &change);
        // printf("%d",change);

    } while (change < 1);

    while (change != 0)
    {
        /* code */
        if (change >= 25)
        {
            coin++;
            twenty_five++;
            change -= 25;
        }
        else if (change >= 10)
        {
            coin++;
            ten++;
            change -= 10;
        }
        else if (change >= 5)

        {
            coin++;
            five++;
            change -= 5;
        }
        else if (change >= 1)
        {
            coin++;
            one++;
            change -= 1;
        }
    }

    if (twenty_five != 0)
    {
        printf("25 Coin:%d\n", twenty_five);
    }
    if (ten != 0)
    {
        printf("10 Coin:%d\n", ten);
    }
    if (five != 0)
    {
        printf("five coin:%d\n", five);
    }
    if (one != 0)
    {
        printf("one Coin:%d\n", one);
    }
    printf("\nMinimum coin needed:%d", coin);
    return 0;
}