#include <stdio.h>

int main()
{
    float celcius,fahrenit;

    printf("Enter temperature in Celcius: ");
    scanf("%f",&celcius);

    fahrenit = (9/5)*celcius+32;
    printf("\n");

    printf("Temperature in fahrenit: %f\n",fahrenit);

    return 0;
}

