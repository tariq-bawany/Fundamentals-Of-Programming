#include<stdio.h>
#include<string.h>
// Q10: Create a structure Employee (ID, Name, Salary). Input 5 employees and display the one with the lowest salary.
struct Employee
{
    int ID;
    char name[100];
    float salary;
};

int main (){
    struct Employee employee[5];
    int lowest = 0;
    for(int i =0;i<5;i++){
        printf("Enter the Id of the employee %d:",i+1);
        scanf("%d",&employee[i].ID);
        getchar();
        printf("Enter the Name of the employee %d:",i+1);
        fgets(employee[i].name,100,stdin);
        printf("Enter the Salary of the employee %d:",i+1);
        scanf("%f",&employee[i].salary);
        // printf("Enter the name \n");
        if (employee[i].salary<employee[lowest].salary)
        {
            lowest = i;
        }
        
    }
    // printf("lowest: %d\n",lowest);
        printf("Name: %s",employee[lowest].name);
        printf("ID: %d \n",employee[lowest].ID);
        printf("Salary %.2f:\n",employee[lowest].salary);
        printf("\n");
    
    // printf("\n");
    // for(int i =0;i<5;i++){
        //     printf("Name: %s",employee[i].name);
        //     printf("ID: %d \n",employee[i].ID);
        //     printf("Salary %.2f:\n",employee[i].salary);
        //     printf("\n");
    // }
    return 0;
}