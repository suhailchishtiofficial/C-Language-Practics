// 8. Area and Circumference of Circle
#include<stdio.h>
#include<math.h>

int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = M_PI * pow(radius, 2);
    circumference = 2 * M_PI * radius;

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);

    return 0;
}




