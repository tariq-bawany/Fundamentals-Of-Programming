#include<stdio.h>
/*
    5
   456
  34567
 2345678
123456789
 2345678
  34567
   456
    5
*/
int main (){
    int values =5,spc=4;
    for(int x =1;x<=9;x++){
        // printf("%d\n",values);
        // printf("%d\n",spc);
        for(int y =1;y<=values;y++){
        spc<y?printf("%d",y):printf(" ");
        }
        if(x<5){
            spc--;
            values++;
        }else{
            spc++;
            values--;
        }
        printf("\n");
    }
    return 0;
}