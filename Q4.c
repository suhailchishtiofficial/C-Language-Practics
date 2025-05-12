// 4. Swap Two Numbers

#include<stdio.h>

int main(){
    int a, b, tem;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    tem = a;
    a = b;
    b = tem;

    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}
