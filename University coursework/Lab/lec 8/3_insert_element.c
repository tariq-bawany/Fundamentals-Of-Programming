/*
Create a program that inserts an element at a specified position in an array.
*/
#include <stdio.h>

int main()
{
    int arr[100]; // 100 is used bc if user uses sizes of 10 and it adds an element at it will cause overflow
    int size; // size is used for the user input of size of array
    printf("Enter the size of array:");
    scanf("%d", &size);

    // User input of values in the array
    printf("Enter the Values  of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    // printing the values of array before insertion
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n",i, arr[i]);
    }
    printf("\n");

    // user input of add element & and the position of index where to add the element
    int add_index;
    int add_element;
    printf("Enter the Element & and the Position of index:\n");
    scanf("%d", &add_element);
    scanf("%d", &add_index);
    // increasing the size by 1 (if previous size was 9 then we will add element so the new size will 10 --> 9+1)
    size++;
    // index always start from 0 so we use size-1 , and just want to change the positions of elements afterwards from the new element position
    for (int i = size - 1; i >= add_index; i--)
    {
        if (i > add_index)
        {
            // new size = Previous Size+1
            // last index will be empty
            // we need the add_index position to be empty
            // moved the elements to +1 till add_index 
            arr[i] = arr[i - 1];
        }
        if (i == add_index)
        {
            // at add_index position we stored the new element
            arr[i] = add_element;
        }
        // printf(" %d : %d\n",i , arr[i]);
    }

    // printing the new array
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n",i, arr[i]);
    }
    printf("\n");

    
    return 0;
}