// 21. Leap Year

#include<stdio.h>
int main(){
    int year =1999;
    if((year%100 != 0 && year%4 == 0 ) || year%400 ==0)
    return 0;
}

