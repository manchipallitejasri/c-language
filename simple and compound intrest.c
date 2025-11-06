#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, simple_interest, compound_interest;
    int time;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%d", &time);

    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow((1 + rate / 100), time) - 1);

    printf("\nSimple interest: %.2f", simple_interest);
    printf("\nCompound interest: %.2f", compound_interest);

    return 0;
}
