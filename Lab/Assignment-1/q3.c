#include<stdio.h>
int rev(int num, int rev); // function prototype
int main (){
    int num ;
    printf("Enter number:"); // user input for number
    scanf("%d",&num);
    // variable declaration and initialization to 0
    int reverse = 0; 
    int remainder = 0;
    reverse = rev(num,reverse); // calling rev() func and storing the returned value 
    printf("Reversed number: %d\n",reverse); // printing the reverse variable
    return 0;
}
int rev(int num,int reverse){ // function definition
    if(num == 0){
        return reverse; // if num ==0 , returned reverse
    }
    else{
        // if num != 0, calls the function again with arguments (num /10) and ((reverse*10)+(num%10))
        // this reduces the last digit of the num and storing it in the reverse
        return rev(num/10,(reverse*10)+(num%10)); // returned the reversed number
    }
}