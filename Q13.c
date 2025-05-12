#include<stdio.h>
int main(){
    int a , b ;
    printf("Give the two number ");
    scanf("%d %d", &a , &b);

    if (a == b){
        printf("Both are equal");
    }
    else {
        printf("Not equall");
    }
    return 0;
}