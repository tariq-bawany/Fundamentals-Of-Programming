#include <stdio.h>
#include <string.h>

//Write a program to convert all uppercase characters to lowercase and all lowercase characters to uppercase in a given string.
int main()
{
    char str[] = "My name is Muhammad Tariq";
    char str1;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] >= 97)
        {
            // printf("lower%d\n");
            str1 = str[i]-32;
            str[i] = str1;
            // printf("%c\t",str[i]);
        }
    }
    // printf("%s\n", str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] <= 97 && str[i]!=32)
        {
            // printf("lower%d\n");
            str1 = str[i]+32;
            str[i] = str1;
            // printf("%c\t",str[i]);
        }
    }
    printf("%s\n", str);


    /*
    char strr[] = "My name is Muhammad Tariq";
    char strr1;
    for (int i = 0; strr[i]!='\0'; i++)
    {
        if (strr[i]>=97)
        {
            // printf("lower%d\n");
            strr1 = strr[i]-32;
            strr[i] = strr1;
            // printf("%c\t",strr[i]);
        }else if(strr[i] < 97 && strr[i]!=32){
            strr1 = strr[i]+32;
            strr[i] = strr1;

        }
    }
    printf("%s\n", strr);
    // printf("hello\n");
    */
    return 0;
}