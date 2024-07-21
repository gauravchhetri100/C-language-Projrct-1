#include<stdio.h>

int main() {
    // Declare variable to store Celsius temperature
    float Celsius;

    // Prompt user to enter the Celsius temperature and read input
    printf("Enter the Celsius degree:");
    scanf("%f", &Celsius);

    // Calculate Fahrenheit temperature using the formula: (9.0 / 5.0) * Celsius + 32.0
    float Fahrenheit = (9.0 / 5.0) * Celsius + 32.0;

    // Display the calculated Fahrenheit temperature with explanation
    printf("The degree in Fahrenheit is: %.2f\n", Fahrenheit);

    return 0;
}
