#include <stdio.h>

int main() {
    int num, largest, second_largest;
    int i;

    printf("Enter 10 integers:\n");

    printf("Enter number 1: ");
    scanf("%d", &largest);
    
    second_largest = 0; 

    for (i = 2; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > largest) {
            second_largest = largest;
            largest = num;
        } 
        else if (num < largest && num > second_largest) {
            second_largest = num;
        }
    }
    printf("\nLargest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);


    return 0;
}