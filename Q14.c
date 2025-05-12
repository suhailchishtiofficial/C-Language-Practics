#include<stdio.h>
int main(){
    int a , b ;
    printf("Give the two number ");
    scanf("%d %d", &a , &b);

    if (a < b){
        printf("b is greater %d",b);
    }
    else  (a > b)
    {
        printf(" A is greater %d",a);
    }
    
    return 0;
}