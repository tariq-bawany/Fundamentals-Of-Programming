#include <stdio.h>
// Q16: Merge two arrays into a third array.
int main(){
    int size1; // varaible declaration
    int size2;
    printf("Enter the size of Array 1:");
    scanf("%d", &size1); // array 1 size input 
    printf("Enter the size of Array 2:");
    scanf("%d", &size2); // array 2 size input 
    int arr1[size1]; // array 1 declaration
    int arr2[size2]; // array 2 declaration
    int arr3[size1+size2]; // merged array declaration
    printf("Array 1 :\n");
    for (int i = 0; i < size1; i++){ // user input for array 1 
        printf("Enter value at %d index :", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    printf("Array 2 :\n"); 
    for (int i = 0; i < size2; i++){ // user input for array 2 
        printf("Enter value at %d index :", i);
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < (size2+size1); i++){ // merging array  1 and array 2 in single array 
        if(i<size1){
            arr3[i] = arr1[i];
        }else{
            arr3[i] = arr2[i-size1];
        }
    }
    printf("\nMerged Array: ");
    for(int i =0;i<(size1+size2);i++){ // printing the merged array
        printf("%d ",arr3[i]);
    }
    return 0;
}