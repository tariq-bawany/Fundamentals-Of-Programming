// #include<stdio.h>

// int main (){
//     int start,end,val;
//     printf("Enter the no of rows:");
//     scanf("%d",&val);
//     // val =5;
//     start = end = val;
//     for(int i =1;i<=val;i++){
//         for (int j = 1;j<=(val*2-1);j++){
//             if(j>=start && j<=end){
//                 if(i%2 == 0 && j%2 == 0){
//                     printf("*");
//                 }else if(i%2 !=0 && j%2!=0){
//                     printf("*");
//                 }else
//                 printf(" ");
//             }else{
//                 printf(" ");
//             }
//         }
//         // printf("%d\t",start);
//         // printf("%d\n",end);
//         printf("\n");
//         start--;
//         end++;
//     }
//     return 0;
// }

// /******************************************************************************

//                             Online C Compiler.
//                 Code, Compile, Run and Debug C program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the no or rows:"); // user input for rows
    scanf("%d",&n);
	for(int i =0; i<n; i++) { //verticle loop
		for(int j =0; j<n-i; j++) { // prints the start spaces only
			printf(" ");
		}
		for(int j=0;j<=i;j++){ // prints the ('* ') after spaces acc to i 
			printf("* ");
		}
		printf("\n"); // new line 
	}
	return 0;
}