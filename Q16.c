#include<stdio.h>
int main(){
    int n;
    printf("Give the  number ");
    scanf("%d",&n);

    if (n%2 == 0){
        printf("EVEN ");
    }
    else {
        printf("ODD");
    }
    return 0;
}