#include<stdio.h>

/*
If the marks obtained by a student in five different subjects are input through the keyboard, find out
percentage marks obtained by the student. Assume that the maximum marks that can be obtained
by a student in each subject is 100.
*/
int main (){
    float sub1,sub2,sub3,sub4,sub5;
    float total=500,marks=0,percentage = 0;

    printf("Enter marks of Subject 1 (max-100):");
    scanf("%f",&sub1);
    printf("Enter marks of Subject 2 (max-100):");
    scanf("%f",&sub2);
    printf("Enter marks of Subject 3 (max-100):");
    scanf("%f",&sub3);
    printf("Enter marks of Subject 4 (max-100):");
    scanf("%f",&sub4);
    printf("Enter marks of Subject 5 (max-100):");
    scanf("%f",&sub5);
    marks = sub1+sub2+sub3+sub4+sub5;
    percentage = marks/total *100.0;
    printf("Percentage Obtained: %.2f%% \n",percentage);
    return 0;
}