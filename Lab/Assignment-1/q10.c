#include <stdio.h>
struct Employee{ // structure declaration
    // structure member declaration
    int ID; 
    char name[100]; 
    float salary; 
};
int main()
{
    // Arrays of Structure with 5 element
    struct Employee employee[5];  
    int lowest = 0; // for 0 index or 1st element 
    for (int i = 0; i < 5; i++)
    {
        // taking user inut for structure data at each index
        printf("Enter the Id of the employee %d:", i + 1);
        scanf("%d", &employee[i].ID); // ID input from user
        getchar(); // clear the input buffer
        printf("Enter the Name of the employee %d:", i + 1);
        fgets(employee[i].name, 100, stdin); // name input from user
        printf("Enter the Salary of the employee %d:", i + 1);
        scanf("%f", &employee[i].salary); //salary input from user
        printf("\n");
        if (employee[i].salary < employee[lowest].salary) {
            // if the current salary is less than lowest salary
            // then lowest = current index, i
            lowest = i;
        }
    }
    // Printing the Employee Details with lowest Salary
    printf("Employee with the lowest salary:\n");
    printf("Name: %s", employee[lowest].name);
    printf("ID: %d \n", employee[lowest].ID);
    printf("Salary %.2f:\n", employee[lowest].salary);
    printf("\n");
    return 0;
}