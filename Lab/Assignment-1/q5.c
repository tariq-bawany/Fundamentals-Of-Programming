#include <stdio.h>
int main(){
    // 0 -9 (48 - 57)
    // A -Z (65 - 90)
    // a - z (97 - 122)
    char arr[100]; // empty array declaration with size of 100 char
    printf("Enter the sentence:"); // user input
    fgets(arr,100,stdin);
    int i = 0; // loop index variable with value 0
    int lowercase, uppercase, digits; // variabled declaration
    lowercase = uppercase = digits = 0; // variable assignment with 0
    while (arr[i] != '\0') // loop iterates till the end of sentence through '\0' (null operator)
    {
        if (arr[i] >= 97 && arr[i] <= 122) // checks for lowercase letters
            lowercase++;
        else if(arr[i]>=65 && arr[i]<=90) // checks for uppercase letters
            uppercase++;
        else if(arr[i]>=48 && arr[i]<=57) // checks for digits
            digits++;
        i++; // loop index
    }
    printf("Digits: %d\n",digits); // printing the digits counter
    printf("Lowercase: %d\n",lowercase);// printing the lowercase counter
    printf("Uppercase: %d\n",uppercase);// printing the digits counter
    return 0;
}