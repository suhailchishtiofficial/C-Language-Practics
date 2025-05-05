// 9. Area of Triangle

#include<stdio.h>   
#include<math.h>

int main(){
    float a, b, c, Area;
    printf("Enter the Sides a ,b ,c =");
    scanf("%f %f %f",&a,&b,&c);
    float s = (a + b + c) / 2;
    Area =sqrt(s * (s - a) * (s - b) * (s - c));    
    printf("Area of the triangle = %.2f\n", Area);
    return 0;
}