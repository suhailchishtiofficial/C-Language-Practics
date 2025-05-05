// 7. Area and Perimeter of Rectangle
#include<stdio.h>
int main(){
    float l , w;
    printf("Enter the length and width -");
    scanf("%f %f",&l,&w);
    float A = l * w ;
    float P = (l + w) * 2;

    printf("Area of Rectangle = %.2f\n",A);
    printf("Parimeter of Rectangle = %.2f",P);

    return 0;
}
