#include<stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    float marks;
};

int main (){
    struct Student student[3];
    for(int i= 0;i<3;i++){
        printf("\nEnter the Details of Student %d\n",i);
        printf("Enter the Name:");
        gets(student->name);
        // scanf("%s",&student->name);

        printf("Enter the RollNo:");
        scanf("%d",&student->rollNo);
        printf("Enter the Marks:");
        scanf("%f",&student->marks);
    }
    for(int i= 0;i<3;i++){
        printf("Details of Student %d\n",i);
        printf("Name: %s",student->name);
        printf("Name: %d",student->rollNo);
        printf("Name: %f",student->marks);
    }
    return 0;
}