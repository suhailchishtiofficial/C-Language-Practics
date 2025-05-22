// 18. Valid Voter

#include<stdio.h>
int main(){
    char name[100];
    int age ;
    printf("Enter the Name of the user :");
    scanf("%s",name);
    printf("Enter the Age of the user :");
    scanf("%d",&age);
    if (age >=18) printf ("Hello %s, you are eligible to vote.",name);
    else printf("Hello %s, you will be eligible to vote in %d years.",name ,18-age);
    
    return 0;
}
