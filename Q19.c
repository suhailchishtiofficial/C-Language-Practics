// Largest of Three

#include<stdio.h>
int main(){
     float a , b , c;
     printf("Enter the Three Numbers :");
     scanf("%f %f %f",&a,&b,&c);

     if (a>b && a>c) {
        printf("%.2f is the Largest",a);
    }
    else if (b>a && b>c) {
        printf("%.2f is the Largest",b);
    }
    else {
        printf("%.2f is the Largest",c);
    }
    
    return 0;
}