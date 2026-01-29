#include <stdio.h>

int main()
{
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if(i==0 &&( j>=5 && j<=10))printf(" $");
            else if(i==1 && (j>=3 && j<=12))printf(" $");
            else if(i==2 && (j>=2 && j<=13))printf(" $");
            else if(i==3 && ((j>=1 && j<=5)||(j>=8&& j<=11) || (j==14)))printf(" $");
            else if(i==4 && ((j>=1 && j<=5)||(j>=8&& j<=11) || (j==14)))printf(" $");
            else if(i==5 && ((j>=0 && j<=11)||(j==15)))printf(" $");
            else if(i==6 && ((j>=0 && j<=10)||(j==15)))printf(" $");
            else if(i==7 && ((j>=0 && j<=9)||(j==15)))printf(" $");
            else if(i==8 && ((j>=0 && j<=8)||(j==15)))printf(" $");
            else if(i==9 && ((j>=0 && j<=4)||(j==15)))printf(" $");
            else if(i==10 && ((j>=0 && j<=3)||(j==15)))printf(" $");
            else if(i==11 && ((j>=1 && j<=3)||(j==8||j==9)||(j==14)))printf(" $");
            else if(i==12 && ((j>=1 && j<=3)||(j==8||j==9)||(j==13||j==14)))printf(" $");
            else if(i==13 && ((j>=2 && j<=6)||(j==13||j==12)))printf(" $");
            else if(i==14 && ((j>=3 && j<=6)||(j==11||j==12)))printf(" $");
            else if(i==15 && ((j>=5 && j<=10)))printf(" $");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}