#include <stdio.h>
int main(){
    float height,weight,bmi;
    printf("Enter height in meters:");
    scanf("%f",&height);
    printf("Enter weight in KG:");
    scanf("%f",&weight);
    bmi = weight/(height*height);
    if ( bmi>=30 )
    {
        printf("Obese");
    }else if(bmi<30&& bmi>=25){
        printf("normal weight");
    } else if(bmi <18.5 && bmi>=18.5){
        printf("Over weight");
    }else if (bmi<18.5 && bmi>0)
    {
        printf("Under weight:");
    }else{
        printf("invalid input");
    }
    
    
return 0;
}