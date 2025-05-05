// 12. Compound Interest

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percent): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
