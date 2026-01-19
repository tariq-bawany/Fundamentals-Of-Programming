#include<stdio.h>
// Write a function to calculate the average of array elements.
float getAverage(int* arr, int size);

int main() {
    int balance[5] = {1, 1, 1, 1, 1};
    float avg;

    avg = getAverage(balance, 5);

    printf("Average value is: %.2f\n", avg);

    return 0;
}

// Function definition
float getAverage(int* arr, int size) {
    int i;
    float sum = 0.0;
    float avg;
// printf("%u\n",arr);

    for (i = 0; i < size; ++i) {
        sum += *(arr+i);
        
    }

    avg = sum / size;
    return avg;
}