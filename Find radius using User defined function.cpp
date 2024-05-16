#include <stdio.h>

// Function declaration
float calculateCircleArea(float radius);

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the user-defined function
    float area = calculateCircleArea(radius);

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}

// Function definition
float calculateCircleArea(float radius) {
    return 3.14 * radius * radius;
}

