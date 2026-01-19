#include<stdio.h>

// Q17: Compare two strings without using strcmp().

int main (){
    char str1[100];
    char str2[100];
    printf("Enter String 1:");
    fgets(str1,100,stdin);
    printf("Enter String 2:");
    fgets(str2,100,stdin);
    int size1=0;
    int size2=0;
    for(int i  =0;str1[i]!='\0';i++){
        size1++;
    }
    for(int i  =0;str2[i]!='\0';i++){
        size2++;
    }
    int limit;
    if(size1>size2) limit = size1;
    else limit = size2;
    int i=0;
    while(i<=limit){
        if(str1[i] != str2[i] ){
            printf("The Strings are not equal !\n");
            return 0;
        }
        i++;
    }
    printf("The Strings are  equal !\n");
    return 0;
}