#include <stdio.h>
// Read Numbers.txt and calculate the sum of all stored numbers.
int main()
{
    FILE *fptr = fopen("Numbers.txt", "r");
    int num, sum = 0;

    if (fptr == NULL)
        return 1;

    while (1)
    {
        fscanf(fptr, "%d", &num);

        if (feof(fptr))
        {
            break;
        }
        sum += num;
    }

    fclose(fptr);
    printf("Sum: %d\n", sum);
    return 0;
}