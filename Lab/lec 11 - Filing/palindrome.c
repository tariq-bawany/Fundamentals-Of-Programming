// Palindrome
#include<stdio.h>
int main (){
    FILE *fptr = fopen("data.txt","r");
    char arr[100];
    char ch;
    int i =0;
    while((ch =fgetc(fptr)) !=EOF){
        arr[i] = ch;
        i++;
    }
    arr[i] = '\0';
    int index = i-1;
    for(int j=0;j<i/2;j++){
        // printf("%d\n",i/2);
        if(arr[j]!=arr[index]){
            // printf("%c\n",arr[j]);
            // printf("%c\n",arr[index]);
            // printf("%d\n",index);
            printf("Not a palindrome !\n");
            fclose(fptr);
            return 0;
        }else{
            index--;
        }
    }
    printf("Palindrome\n",arr);
    fclose(fptr);
    return 0;
}
