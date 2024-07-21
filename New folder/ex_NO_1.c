#include<stdio.h>

int main() {
    // Declare variables to store length and width of the rectangle
    int length, width;

    // Prompt user to enter length of the rectangle and read input
    printf("Enter Length of the rectangle:");
    scanf("%d", &length);

    // Prompt user to enter width of the rectangle and read input
    printf("Enter Width of the rectangle:");
    scanf("%d", &width);

    // Calculate area of the rectangle using the formula: length * width
    int area = length * width;

    // Display the calculated area of the rectangle with explanation
    printf("The Area of the rectangle is: %d\n", area);

    return 0;
}
