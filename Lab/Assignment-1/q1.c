#include<stdio.h>
// Input 15 integers into an array. Count even and odd numbers and store odd numbers in a new array.
int main (){
    int arr [15];
    int even,odd;
    int newarr[15];
    even=odd=0;
    newarr[odd] = '\0';
    for(int i =0;i<15;i++){
        printf("Enter the %d number:",i);
        scanf("%d",&arr[i]);
        // arr[i] = i+1;
        if(arr[i]%2!=0){
            newarr[odd]=arr[i];
            odd++;
            newarr[odd]='\0';
        }else{
            even++;
        }
    }  
    int i=0;
    while(newarr[i] != '\0'){
        printf("%d\t",newarr[i]);
        i++;
    }
    printf("\n");
    printf("Odd :%d\n",odd);
    printf("Even :%d\n",even);
    return 0;
}