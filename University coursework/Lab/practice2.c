#include<stdio.h>

int main (){
    int N;
    int odd =1;
    int sum = 0;
    do{
        printf("Enter a positice Integer N:");
        scanf("%d",&N);

    }while(N<=0 || N>=101);
    // printf("%d",N);
    for(int index =1;index <=N;index++){
        if(index%2 != 0){
            sum+= (odd*odd);
        }else{
            sum-= (odd*odd);
        }
        odd+=2;
    }
    printf("%d",sum);

    return 0;
}
/*
Write a C program that performs the following tasks:Input Validation (using do-while):Prompt the user to enter an integer N (number of terms).Use a do-while loop to repeatedly prompt the user until N is positive (i.e., N > 0) AND N is less than or equal to 100.
Alternating Series Calculation (using for loop):Once a valid N is obtained, use a for loop to calculate the sum of the following alternating series up to N terms:S = 1^2 - 3^2 + 5^2 - 7^2 + 9^2 -... . The i-th term is always    +-(Odd number)^2. The sign is positive for odd terms (1st, 3rd, 5th, etc.) and negative for even terms (2nd, 4th, 6th, etc.).The program must print the final sum S.
*/