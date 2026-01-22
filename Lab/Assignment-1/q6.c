#include<stdio.h>
int main (){
    char arr[100]; // empty array declaration
    printf("Enter sentence:");
    fgets(arr,100,stdin); // user input
    int i =0; // loop index
    while (arr[i] != '\0') // loop iterates till end of sentence
    {
        if(arr[i]==32) // checks for space character with ASCII
            arr[i] = 95;  // if found replace it with ('_')/ 95 ASCII
        i++; // loop index
    }
    printf("After replacement with _ : %s\n",arr); // printing the after replacement string array
    return 0;
}