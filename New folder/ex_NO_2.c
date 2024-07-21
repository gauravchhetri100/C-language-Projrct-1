#include<stdio.h>

int main() {
    // Declare variable to store the radius of the circle
    float r;

    // Prompt user to enter the radius of the circle and read input
    printf("Enter the Radius of the circle:");
    scanf("%f", &r);

    // Calculate area of the circle using the formula: (22/7) * r * r
    // Note: 22/7 performs integer division, which yields an integer result.
    // To perform accurate calculation, use 22.0/7 or better use the M_PI constant from math.h
    float area = (22.0 / 7) * r * r;

    // Display the calculated area of the circle with explanation
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
