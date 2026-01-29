#include<stdio.h>

int main (){
    
    printf("\n");
    for(int i =0;i<20;i++){
        for(int j=0;j<20;j++){
            if(i==0 && (j>=10&& j<=17))printf("# ");
            else if(i==1 && (j>=9 && j<=18))printf("# ");
            else if((i==2) && (j>=9 && j<=18 && j!=11))printf("# ");
            else if((i==3 || i==4) && (j>=9 && j<=18))printf("# ");
            else if(i==5 && (j>=9 && j<=13))printf("# ");
            else if(i==6 && (j>=9 && j<=16))printf("# ");
            else if(i==7 && ((j>=8 && j<=12) || j==0))printf("# ");
            else if(i==8 && ((j>=7 && j<=12)|| j==0))printf("# ");
            else if(i==9 && ((j>=5 && j<=14) || (j==0 || j==1)))printf("# ");
            else if(i==10 && (j>=0 && j<=14 && j!=3 && j!=13))printf("# ");
            else if(i==11 && (j>=0 && j<=12))printf("# ");
            else if(i==12 && (j>=0 && j<=12))printf("# ");
            else if(i==13 && (j>=1 && j<=11))printf("# ");
            else if(i==14 && (j>=2 && j<=11))printf("# ");
            else if(i==15 && (j>=3 && j<=10))printf("# ");
            else if(i==16 && (j>=4 && j<=9 && j!=7))printf("# ");
            else if(i==17 && (j==4 || j==5 || j==9))printf("# ");
            else if(i==18 && (j==4 || j==9))printf("# ");
            else if(i==19 && (j==4 || j==5 || j==9 || j==10))printf("# ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}