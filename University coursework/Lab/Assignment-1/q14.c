// #include <stdio.h>
// // Q14: Read a text file and print its contents in reverse order (character by character).
// int main()
// {
//     FILE *fptr;
//     // char content[1000]; // Array to store file data
//     char contents[100][100] ={'\0'};
//     int i = 0;

//     fptr = fopen("Numbers.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("Error: Could not open file.\n");
//         return 1;
//     }

//     // 1. Read the file character by character into the array
//     char ch;
//     int j = 0;
//     while ((ch = fgetc(fptr)) != EOF && i < 1000)
//     {
//         contents[i][j] = ch;
//         // contents[i][j+1] = '\0';
//         // printf("%d\t", i);
//         // printf("%d\n", j);
//         if (ch == '\n')
//         {
//             i++;
//             j = 0;
//         }
//         else
//         {
//             j++;
//         }
//         // printf("%c",contents[i][j]);
//     }

//     // i now represents the total count of characters read
//     printf("\n\nFile contents in reverse:\n");

//     // 2. Loop backward through the array
//     // for (int j = i - 1; j >= 0; j--) {
//     //     printf("%c", contents[j]);
//     // }
//     for (int in = i; in>=0; in--)
//     {
//         // for(int j =0;contents[in][j]!='\n';j++){
//         // }
//         // for(int j=0;j)
//         printf("%s", contents[in]);
//     }
//     fclose(fptr);
//     return 0;
// }

#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\data\\code\\C lang\\C\\Fundamentals Of Programming\\Lab\\Assignment-1\\data.txt", "r"); // file pointer declaration and assignment
    if (fp == NULL) // checks existence of file or not
    {
        printf("Error opening the file!\n");
        return 1;
    }
    char ch; // empty char varaible
    char arr[100] = {'\0'}; // array declaration with all values of Null Operator
    int i = 0;
    while ((ch = fgetc(fp)) != EOF) // loop iterates till the end of the file
    {
        arr[i] = ch; // arrays values are changes and the file content is stored in the array
        i++;
    }
    printf("File Content: %s\n", arr); // printing the original file content in array
    printf("Reversed Content: ");
    for(int j=i;j>=0;j--){
        printf("%c", arr[j]); // printing the reversed content
    } 
    fclose(fp); // closes the file
    return 0;
}