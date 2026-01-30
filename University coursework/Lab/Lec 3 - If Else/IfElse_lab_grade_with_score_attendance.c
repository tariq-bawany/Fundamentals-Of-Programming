#include <stdio.h>
int main(){
    float score, attendance ;
    printf("Enter Score:");
    scanf("%f",&score);
    printf("Enter Attendance:");
    scanf("%f",&attendance);
    if (score>0 && score<=100 && attendance>0 && attendance<=100)
    {
        if (score>=90 && attendance>=90)
        {
            printf("Grade A.");
        }
        else if (score>=80 && attendance>=80)
        {
            printf("Grade B.");
        }
        else if (score>=70 && attendance>=70)
        {
            printf("Grade C.");
        }
        else if (score>=60 && attendance>=60)
        {
            printf("Grade D.");
        }else{
            printf("Grade F.");
        }
        
        /* code */
    }else{
        printf("Invalid");
    }
    
return 0;
}