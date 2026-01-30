/*
Design a program that acts as a unit conversion calculator. It should provide options for converting between different units (e.g., length, temperature, currency) based on the user's choice from a menu. Use a switch-case statement to implement the conversions.
*/
#include <stdio.h>

int main()
{
    int convertor; // main selection for lenght and temperature
    printf("Enter Option for Conversion (1- length   ,  2-temperature) :");
    scanf("%d", &convertor);
    int option = 0; // will select from user about different conversions in length and temperature like (m to cm  in lenght)
    float input; // will store the user input before conversion
    float output; // will store the converted value
    switch (convertor) // main selection switch case (length vs temperature)
    {
    case 1: // if user selects the length
        printf("Enter Option (1- cm to m  2- m to cm) :");
        scanf("%d", &option); // stores user selection of conversion
        switch (option) // sub switch case between different selection of length
        {
        case 1: // if user select option 1 ==> cm to m
            printf("Enter length in cm:");
            scanf("%f", &input); // stores the user input
            output = input / 100.0; // calculates the conversion
            printf("The lenght is %.2f m", output); // prints the converted value stored in output
            break;
        case 2: // if user select option 2 ==> m to cm
            printf("Enter length in m:");
            scanf("%f", &input); // stores the user input
            output = input * 100.0; // calculates the conversion
            printf("The lenght is %.2f cm", output); // prints the converted value stored in 
            break;
        default:
            printf("Inalid selection !"); // will print if user select another option 
            break;
        }
        break;
    case 2: // if user selects the temperature
        printf("Enter Option (1- Farenhite to Celcius  2-Celcius to farenhite) :");
        scanf("%d", &option); // stores user selection of conversion
        switch (option) // sub switch-case for different conversion of temperature
        {
        case 1: // if user select option 1 ==> Farenhite to Celcius
            printf("Enter temperature in farenhite :");
            scanf("%f", &input); // stores the user input
            output = (input - 32) * (5.0 / 9.0); // calculates the conversion
            printf("The Temperature is %.2f Celcius", output); // prints the converted value stored in output
            break;
        case 2: // if user select option 2 ==> Celcius to Farenhite
            printf("Enter temperature in Celcius :");
            scanf("%f", &input); // stores the user input
            output = input * (5.0 / 9.0) + 32; // calculates the conversion
            printf("The Temperature is %.2f Farenhite", output); // prints the converted value stored in output
            break;
        default:
            printf("Inalid selection !"); // will print if user select another option 
            break;
        }
        break;
    default:
        printf("Invalid input for conversion !"); // will print if user select another option 
        break;
    }
    return 0;
}
/*
==> Options ==> 1-lenght    2-temperature
==> 1-lenght ==> Options ==> 1- cm to m     2- m to cm
==> 2-temperature ==> Options ==> 1- farenhite to celcius     2- celcius to farenhite
==> C = f - 32 x 5/9
==> F = C x 9/5 + 32
*/