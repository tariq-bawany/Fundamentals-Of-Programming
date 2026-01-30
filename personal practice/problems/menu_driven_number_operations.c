#include <stdio.h>
/*
Quiz :Write a program in C where you take 2 inputs from the user and do these operations if the user enters:
1 = Even/Odd.
2 = Divisible by 5 or not.
3 = Compare (Greater or Lesser).
4 = Negative or Positive.
*/

// Muhammad Tariq
int main()
{
    int first, second, choice;
    printf("Enter the first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);
    printf("1-)Even/Odd.\n2-)Divisible by 5 or not.\n3-)Compare (Greater or Lesser).\n4-)Negative or Positive.\nWhat you want to find(Enter 1/2/3/4):");
    scanf("%d", &choice);
    puts("");
    if (choice == 1)
    {
        // first % 2 == 0 && second % 2 == 0 ? "Both 1st:%d & 2nd:%d Numbers are even" : "" ==> ternary operator
        //ternary operator used instead of if & else statement 
        printf(first % 2 == 0 && second % 2 == 0 ? "Both 1st:%d & 2nd:%d Numbers are even" : "",first,second); 
        printf(first % 2 == 0 && second % 2 != 0 ? "1st Number:%d is Even & 2nd Number;%d is Odd" : "",first,second);
        printf(first % 2 != 0 && second % 2 == 0 ? "1st Number:%d is Odd & 2nd Number:%d is Even" : "",first,second);
        printf(first % 2 != 0 && second % 2 != 0 ? "Both 1st:%d & 2nd:%d Numbers are Odd" : "",first,second);
    }
    else if (choice == 2)
    {
        printf(first%5==0 && second%5 ==0?"Both %d , %d are divisible by 5":"",first,second);
        printf(first%5!=0 && second%5 !=0?"Both %d , %d are not divisible by 5":"",first,second);
        printf(first%5==0 && second%5 !=0?"1st:%d is divisible by 5 & 2nd:%d is not divisible by 5":"",first,second);
        printf(first%5!=0 && second%5 ==0?"1st:%d is not divisible by 5 & 2nd:%d is  divisible by 5":"",first,second);
    }
    else if (choice == 3)
    {
        // if(first > second){
        //     printf("1st is greater than 2nd");
        // }else if(first < second){
        //     printf("1st is less than 2nd");
        // }else{
        //     printf("1st is equalt to 2nd")
        // }
        printf(first>second?"1st:%d is greater than 2nd:%d":"",first,second);
        printf(first<second?"1st:%d is less than 2nd:%d":"",first,second);
        printf(first==second?"1st is equalt to 2nd":"",first,second);
    }
    else if (choice == 4)
    {
        printf(first>= 0 && second>= 0?"Both %d , %d are positive\n":"",first,second);
        printf(first<= 0 && second<= 0?"Both %d , %d are negative\n":"",first,second);
        printf(first>= 0 && second<= 0?"1st:%d is positive & 2nd:%d is negative":"",first,second);
        printf(first<= 0 && second>= 0?"1st:%d is negative & 2nd:%d is positive":"",first,second);
    }else{
        printf("Invalid Choice");
    }
    

    return 0;
}