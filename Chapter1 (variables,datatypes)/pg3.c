#include <stdio.h>

int main()
{
    float l,b;
    printf("Enter the length:\n");
    scanf("%f",&l);

    printf("Enter the breadth:\n");
    scanf("%f",&b);

    float area;
    area = l * b;
    printf("Area of the rectangle: %f\n",area);
    
    return 0;
}

