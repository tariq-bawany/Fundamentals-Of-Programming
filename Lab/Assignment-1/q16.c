#include <stdio.h>
// Q16: Merge two arrays into a third array.
int main()
{
    int size1;
    int size2;
    printf("Enter the size of Array 1:");
    scanf("%d", &size1);
    printf("Enter the size of Array 2:");
    scanf("%d", &size2);
    char arr1[size1];
    char arr2[size2];
    char arr3[size1+size2];
    for (int i = 0; i < size1; i++)
    {
        printf("Enter the value of Array 1 at index %d:", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        printf("Enter the value of Array 2 at index %d:", i);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < (size2+size1); i++)
    {
        if(i<size1){
            arr3[i] = arr1[i];
        }else{
            arr3[i] = arr2[i-size1];
        }
    }
    for(int i =0;i<(size1+size2);i++){
        printf("Merged Array at %d : %d\n",i,arr3[i]);
    }
    return 0;
}