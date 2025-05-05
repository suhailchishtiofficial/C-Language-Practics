#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, circumference;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    // Output (%.2f ensures two decimal places)
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
