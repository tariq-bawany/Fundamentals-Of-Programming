#include<stdio.h>
#include<ctype.h>

// Write a program to count the number of vowels and consonants in a given string.
int main (){
    int vowels = 0;
    int consenants = 0;
    char str [] = "My name is Muhammad Tariq";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=32 && str[i]<97){
            str[i] = tolower(str[i]);
        }
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
            vowels++;
        }else if(str[i]!=32){
            consenants++;
        }
    }
    printf("Vowels :%d\n",vowels);
    printf("consenants :%d\n",consenants);

    return 0;
}