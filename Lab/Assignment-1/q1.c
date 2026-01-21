#include<stdio.h>
int main (){
    int NumArr [15]; 
    int even = 0,odd = 0; 
    int Oddarr[15]; 
    for(int i =0;i<15;i++){
        printf("Enter the value at %d:",i);
        scanf("%d",&NumArr[i]);
        if(NumArr[i]%2!=0){ 
            Oddarr[odd]=NumArr[i];  
            odd++; 
        }else{
            even++; 
        }
    }  
    printf("Odd Array: ");
    for(int j=0;j<odd;j++){
        printf("%d  ",Oddarr[j]); 
    }
    printf("\n");
    printf("Odd :%d\n",odd); 
    printf("Even :%d\n",even); 
    return 0;
}