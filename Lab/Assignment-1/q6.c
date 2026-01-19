#include<stdio.h>
// Replace all spaces in a string with underscores (_) without using string library functions.
int main (){
    char arr[] = "MY name is Muhammad Tariq and i am born on 19 march 2005";
    int i =0;
    while (arr[i] != '\0')
    {
        if(arr[i]==32)
            arr[i] = 95;
        i++;
    }
    printf("%s\n",arr);
    return 0;
}