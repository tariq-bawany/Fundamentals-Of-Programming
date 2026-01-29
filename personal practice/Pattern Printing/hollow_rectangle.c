#include<stdio.h>

int main (){
    int odd=1;
    for(int i = 1;i<=7;i++){
        int is = 7 /2;
        for(int j = 1;j<=7;j++){
            if(i==7 || j==7 ||i==1 || j==1){
                printf(" # ");
            }else if( (i==3 || i==5) && (j>=3 && j<=5)){
                printf(" # ");
            }else if(i==4 && (j==5 || j==3)){
                printf(" # ");
            }
            else{
                printf("   ");
            }
            // if(i==7 || j==7 ||i==1 || j==1){
            //     printf(" # ");
            // }else if((i>= is && i<=is+2) && (j>= is && j<=is+2) && !(i==is+1 && j ==is+1)){
            //     printf(" # ");
            // }else{
            //     printf("   ");
            // }   
        }
        printf("\n");
    }
    return 0;
}