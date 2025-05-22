#include<stdio.h>
int main(){
     float  amount , discount;
     printf("Enter the Amount : ");
        scanf("%f", &amount);
    if(amount <=5000){
        discount = 0;
    }
    else if(amount <= 7000) {
        discount = (5 * amount)/100 ;
    }
    else if ( amount <= 9000) {
        discount = (10* amount)/100;
    }
    else{
        discount = (20* amount)/100;
    }
    
    float finalprice = amount -discount;
    printf("Discount %.2f:\n" ,discount);
    printf("Final Price %.2f:" ,finalprice);

    return 0;
}