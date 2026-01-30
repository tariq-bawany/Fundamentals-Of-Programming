#include <stdio.h>

// there are 2 rules , it will always go top and right.
// If there is no top, it will come to the bottom in the same line.
// If there is no right, it will come to the left in the same line.
// if the top and right position is occupied, it will go to the bottom of the previous index
int main()
{
    // is a 1d array
    int num = 3; // num will always be an odd number
    int length = num * num; // total length is num*num = 9
    int ms[length]; // array of size - length
    for (int i = 0; i < length; i++) 
    { // initializing all values of array to 0
        ms[i] = 0;
    }

    // the 1st center part will always be 1 
    int index = num / 2; // will get the center index
    int count = 1; // starting values , from 1 to length 
    ms[index] = count; 
    int prev_index = index;
    int difference = 0;
    while (count != length) // will run till count == length
    {

        // Going Top
        if (index - num < 0)
        {
            // if index is at the 1st row
            difference = index - num;
            index = length + difference;
        }
        else
        {
            index = index - (num );
        }
        // printf("%d\n\n",index);

        // Going Right
        // if index is at the end column
        if((index+1)%num == 0) index = index -(num-1) ;
        else index++;

        // Condition for occupied index
        if(ms[index] !=0){
            index = prev_index;
            index = index +num;
        }

        ms[index] = ++count;
        prev_index = index;
    }

    for (int i = 0; i < length; i++)
    {
        // printf("[%2d] %2d ", i, ms[i]);
        printf("%2d ", ms[i]);
        if ((i + 1) % num == 0)
            printf("\n");
    }
    return 0;
}