#include <stdio.h>

int main()
{
    float amount,year,rate;

    printf("Enter principal amount: ");
    scanf("%f",&amount);
    printf("\n");

    printf("Enter time period: ");
    scanf("%f",&year);
    printf("\n");

    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("\n");

    float simple_interest;
    simple_interest = (amount*year*rate)/100;

    printf("Simple interest = %f\n",simple_interest);

    return 0;
}

