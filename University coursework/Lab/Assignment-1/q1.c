#include<stdio.h>
int main (){
    int arr [15]; //empty array declaration for integers 
    int even,odd; // even and odd counter variable declartion
    int newarr[15]; // odd array declaration
    even=odd=0; // assigning the even and odd counter the value of 0
    for(int i =0;i<15;i++){
        // taking integer input from Users
        printf("Enter the value at %d:",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){ // if the integer is odd then stores the integer in newarr
            newarr[odd]=arr[i];  
            odd++; // increments the odd counter 
        }else{
            even++; // if the integer is even , increment the even counter
        }
    }  
    printf("Odd Array: ");
    for(int j=0;j<odd;j++){
        printf("%d  ",newarr[j]); // printing the odd array
    }
    printf("\n");
    printf("Odd :%d\n",odd); // printing the odd counter
    printf("Even :%d\n",even); // printing the even counter
    return 0;
}