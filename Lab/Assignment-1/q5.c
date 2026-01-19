#include <stdio.h>
// Input a sentence and count uppercase letters, lowercase letters, and digits.
int main()
{
    // 0 -9 (48 - 57)
    // A -Z (65 - 90)
    // a - z (97 - 122)
    char arr[] = "MY name is Muhammad Tariq and i am born on 19 march 2005";
    int i = 0;
    int lowercase, uppercase, digits;
    lowercase = uppercase = digits = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= 97 && arr[i] <= 122)
            lowercase++;
        else if(arr[i]>=65 && arr[i]<=90)
            uppercase++;
        else if(arr[i]>=48 && arr[i]<=57)
            digits++;

        i++;
    }
    printf("%d\n",digits);
    printf("%d\n",lowercase);
    printf("%d\n",uppercase);

    return 0;
}