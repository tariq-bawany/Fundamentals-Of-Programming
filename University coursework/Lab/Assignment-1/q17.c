#include<stdio.h>
int main (){
    char str1[100]; // array declaration 
    char str2[100];
    printf("Enter String 1:");
    fgets(str1,100,stdin); // user input for string 1 
    printf("Enter String 2:");
    fgets(str2,100,stdin); // user input for string 2 
    int size1=0;
    int size2=0;
    for(int i  =0;str1[i]!='\0';i++){
        size1++; // calculating the size of  str1
    }
    for(int i  =0;str2[i]!='\0';i++){
        size2++; //calculating the size of str2
    }
    int limit;
    // checking which size is greater and stored it into limit
    if(size1>size2) limit = size1;
    else limit = size2;
    int i=0;
    while(i<=limit){ // loops till the index reaches limit that is the largest array size 
        // if any characters of both strings mismatch it means they are not equal and it break the loop
        if(str1[i] != str2[i] ){ 
            printf("The Strings are not equal !\n");
            printf("\n");
            return 0;
        }
        i++;
    }
    // if they are equal the loop ends and stops without break and the string is equal
    printf("The Strings are  equal !\n");
    printf("\n");
    return 0;
}