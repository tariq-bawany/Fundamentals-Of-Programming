#include<stdio.h>

/*
Write a program that takes a input and uses a while loop to reverse and print the digits of that number. For example, if the input is 12345, the program should print 54321.
*/
int main (){
    int num,remainder,reverse =0;
    printf("Enter a five digit number:");
    scanf("%d",&num);
    num = (num>=9999 && num<=100000)* num; // if the number is not 5 digit, it will become 0 
    while(num!=0 && num >0){
        remainder = num%10; // saves the remainder of  the number like 55&10 = 5 
        reverse = reverse*10 + remainder; // multiply by 10 to balance the below divide 
        num/=10;
    }
    reverse!=0?printf("%d",reverse):printf("Invalid number"); // prints if the number is five digits otherwise prints Invalid Number
    return 0;
}
/*
Output:
Enter a five digit number:12345
54321
*/