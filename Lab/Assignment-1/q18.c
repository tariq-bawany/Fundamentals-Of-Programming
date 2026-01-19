#include<stdio.h>
// Q18: Count vowels in a string using pointers.
int main (){
    char str[100];
    printf("Enter String:");
    fgets(str,sizeof(str),stdin);
    int i =0;
    char *strPtr = str;
    int vowels = 0;
    char str1;
    while(*(strPtr)!= '\0'){
        if(*(strPtr) <97 && *(strPtr) >=65 && *(strPtr) != 32){
            str1 = *(strPtr)+32;
            *strPtr = str1;
        }
        // printf("%c",*(strPtr));
        if(*(strPtr) == 'a' || *(strPtr) == 'e' || *(strPtr) == 'i' || *(strPtr) == 'o' || *(strPtr) == 'u'){
            vowels++;
        }
        strPtr++;
    }
    printf("VOWELS : %d\n",vowels);
    return 0;
}