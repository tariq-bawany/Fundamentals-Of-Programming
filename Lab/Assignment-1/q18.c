#include<stdio.h>
// Q18: Count vowels in a string using pointers.
int main (){
    char str[100]; // string array declaration
    printf("Enter String:");
    fgets(str,sizeof(str),stdin); // user input for strings
    int i =0;
    char *strPtr = str; // pointer varaible 
    int vowels = 0; // vowels counter varaible 
    char str1;
    while(*(strPtr)!= '\0'){ // loops till the end of the string 
        if(*(strPtr) <97 && *(strPtr) >=65 && *(strPtr) != 32){ // converts the whole string into lowercase letter 
            str1 = *(strPtr)+32;
            *strPtr = str1;
        }
        if(*(strPtr) == 'a' || *(strPtr) == 'e' || *(strPtr) == 'i' || *(strPtr) == 'o' || *(strPtr) == 'u'){
            // checks for vowels character , if found increment the vowel counter
            vowels++;
        }
        // increment the pointer variable and it moves to the next array element
        strPtr++;
    }
    // print the vowels count 
    printf("VOWELS : %d\n",vowels);
    return 0;
}