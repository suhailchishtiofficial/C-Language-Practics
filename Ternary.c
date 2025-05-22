#include<stdio.h>

int main(){
    int age;
    printf("Enter the age :");
    scanf("%d",&age);
    printf(age>=18 ? "Valid Voter":"Not Valid Voter");
    return 0;
}
