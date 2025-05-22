#include<stdio.h>
int main(){
    int n ;
    printf("Give the value 1 - 100 :");
    scanf("%d",&n);
    switch (n)
    {
    case 10 ... 50 :
        printf("in a range of 10 - 50");
        break;
    case 51 ... 100 :
        printf("in a range of 51 - 100");
        break;
    }
    return 0;
}