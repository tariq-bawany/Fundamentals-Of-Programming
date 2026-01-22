#include<stdio.h>
int main (){
    int start,end; // varaible deaclaration and assignment
    start =1;
    end = 5;
    for(int i =1;i<=5;i++){ // vertical loop
        for(int j=1;j<=5;j++){ // horizontal loop
            if(j==start || j==end){ //checks the condition
                printf("%d",start); // if true print the variable
            }else{
                printf(" "); // if false rint the spaces
            }
        }
        printf("\n");// new line
        if(i<3){// changing the value of varaibles according to the vertical index values
            start++; 
            end--;
        }else{
            start--;
            end++;
        }
    }
    return 0;
}