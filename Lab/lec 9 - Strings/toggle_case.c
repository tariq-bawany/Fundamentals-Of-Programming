// Toggle Case
#include<stdio.h>
int main (){
    char arr[100] = "My name is Muhammad Tariq";
    char newarr[100];
    printf("%d\n",'a');
    printf("%d\n",'z');
    for(int i =0;arr[i]!= '\0';i++){
        if(arr[i]>=65 && arr[i]<=90){
            arr[i] = arr[i]+32;
        }else if(arr[i]>=97 && arr[i]<=122){
            arr[i] = arr[i]-32;
        }
        newarr[i] = arr[i];
    }
    int vowels = 0,consenants = 0;
    for(int i =0;newarr[i]!='\0';i++){
        if(newarr[i]>=65 && newarr[i]<=90){
            newarr[i] = newarr[i]+32;
        }
        if(newarr[i] == 'a' || newarr[i] == 'e' ||newarr[i] == 'i'||newarr[i] == 'o'||newarr[i] == 'u'){
            vowels++;
        }else{
            consenants++;
        }
    }
    printf("%s\n",arr);
    printf("%d\n",vowels);
    printf("%d\n",consenants);
    return 0;
}