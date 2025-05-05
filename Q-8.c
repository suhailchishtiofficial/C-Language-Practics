// 8. Area and Circumference of Circle
#include<stdio.h>
#include<math.h>

int main(){

    float r ;
    printf("Enter the radius  -",r );
    scanf("%f ", &r);
    float A =  M_PI * pow(r,2) ;
    float C = 2 * M_PI *r;

    printf("Area of Circle = %.2f\n",A);
    printf("Parimeter of Cirle = %.2f",C);

    return 0;
}