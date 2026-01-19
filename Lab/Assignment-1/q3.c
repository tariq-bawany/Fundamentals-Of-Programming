#include<stdio.h>
// Write a recursive function to reverse an integer number.
int rev(int num, int rev);
int main (){
    int num = 12345;
    int reverse = 0;
    int remainder = 0;
    reverse = rev(num,0);
    printf("%d\n",reverse);
    
    return 0;
}
int rev(int num,int reverse){
    if(num == 0){
        return reverse;
    }
    else{
        return rev(num/10,(reverse*10)+(num%10));
    }
}