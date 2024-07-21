#include<stdio.h>

int main() {
    // Declare variables to store principal amount, rate of interest, and time period
    float principal, rate, time;

    // Prompt user to enter principal amount and read input
    printf("Enter Principal amount:");
    scanf("%f", &principal);

    // Prompt user to enter rate of interest (per year) and read input
    printf("Enter Rate of interest (per year):");
    scanf("%f", &rate);

    // Prompt user to enter time period (in years) and read input
    printf("Enter Time period (in years):");
    scanf("%f", &time);

    // Calculate simple interest using the formula: (principal * rate * time) / 100
    float simple_interest = (principal * rate * time) / 100;

    // Display the calculated simple interest
    printf("Simple interest is: %f\n", simple_interest);

    return 0;
}
