#include<stdio.h>
float getAverage(int* arr, int size); // function prototye
int main() {
    int arr[15]; // empty array declartion
    float avg; // float avg variable declaration
    int size  = sizeof(arr) / sizeof(arr[0]); // calculation the size/ lenght of the arr
    for(int i=0;i<15;i++){
        arr[i] = i+1; // assigning values to arr, can be changes to user input
    }
    avg = getAverage(arr, size);// calling function and storing the returned value in avg
    printf("Average value is: %.2f\n", avg); // printing the avg value
    return 0;
}
float getAverage(int* arr, int size) { // Function definition
    // variable declaration
    int i; 
    float sum = 0.0;
    float avg;
    for (i = 0; i < size; ++i) {
        sum += *(arr+i); // calculating the sum
    }
    avg = sum / size; // calculating the avg using formula
    return avg; // returning the avg value
}