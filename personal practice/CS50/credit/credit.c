#include <stdio.h>

void checking_card(long long number, int count);
int main()
{
    // AMEX => 15 lenght => 34/37 Start
    // Mastercard => 16 lenght => 51-55 Start
    // Visa => 13/16 lenght => 4 Start
    // Others INVALID\n
    // 5555555555554444     5105105105105100    5199999999999991    4111111111111111    4012888888881881    4222222222222       378282246310005     371449635398431     378734493671000
    // long long credit = 378282246310005;
    long long credit;

    long long temp;
    int count;
    do
    {
        printf("Enter the card number:");
        scanf("%lld", &credit);
        temp = credit;
        count = 0;
        // the temp is divided by 10 and it reduces it number by 1 digit.
        while (temp > 0)
        {
            temp /= 10;
            count++;
        }
        // printf("%d\n",count);
        /* The while condition checks if the number is greater than 17 or less than 12
        it wil ask for reinput,
        as the number cant be greater than 17or less than 12 at same time */
        while(getchar()!='\n');
    } while (count <= 12 || count >= 17);
    checking_card(credit, count);

    // printf("%lld",temp);
    // printf("%lld",credit);
    return 0;
}

void checking_card(long long number, int count)
{
    int temp;
    int check;
    int inc = 0;
    int validity = 0;
    while (number > 0)
    {
        if (inc > 15)
        {
            break;
        }
        else
        {
            check = number % 10;
            number /= 10;
            inc++;
            if (inc % 2 == 0)
            {
                // (check*2)%10 +(check*2)/10%10)
                // 7*2= 14 ==> 4 + 1 =5
                validity += check * 2 > 9 ? ((check * 2) % 10 + (check * 2) / 10 % 10) : (check * 2);
                    // printf("%d\n",validity);

            }
            else
            {
                validity += check;
                    // printf("%d\n",validity);

            }
            // inc==(count)?printf("%d\n",check):printf("");
            // inc==(count-1)?printf("%d\t",check):printf("");
            if (inc == count - 1)
            {
                temp = check;
            }
            else if (inc == count)
            {
                if (check == 4 &&(count == 13 || count == 16))
                {
                    printf(validity % 10 == 0 ? "VISA\n" : "INVALID\n");
                    // printf("%d\n",validity);
                }
                else if (check == 5 && (temp > 0 && temp < 6))
                {
                    printf(validity % 10 == 0 ? "MASTERCARD\n" : "INVALID\n");
                }
                else if (check == 3 && (temp ==4 || temp == 7) && count ==15)
                {
                    printf(validity % 10 == 0 ? "AMEX\n" : "INVALID\n");
                }else{
                    printf("INVALID\n");
                }
            }
        }
        // printf("%d\t", check);
        // printf("%d\n", inc);

    }
    // printf(validity%10== 0?"Valid":"INVALID\n");
    // printf("%d",count);
    // printf("%d",validity);
}
