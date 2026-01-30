#include <stdio.h>
int main(){
    int months ,month_group;
    printf("Enter months (1-12) : ");
    scanf("%d",&months);
    month_group = (months>0 && months<13)*((months-1) /3 +1);
    switch (month_group)
    {
    case 1:
        printf("Winter Season: January-March");
        break;
    case 2:
        printf("Spring Season: April-June");
        break;
    case 3:
        printf("Summer Season: July-September");
        break;
    case 4:
        printf("Autumn Season: October-December");
        break;
    
    default:
    printf("Invalid Input");
        break;
    }
    // month_group = ((months-1) /3 +1);
    // printf("%d \n",month_group);
return 0;
}