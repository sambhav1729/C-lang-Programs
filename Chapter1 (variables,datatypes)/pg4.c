#include <stdio.h>

int main()
{
    float rad_circle,height,rad_cylinder;

    printf("Enter the radius of the circle: ");  // Taking rad of circle as input
    scanf("%f",&rad_circle);

    float area_circle;
    area_circle = 3.14*rad_circle*rad_circle;      // area of circle formula
    printf("Area of the circle: %f\n",area_circle);
    printf("\n");

    printf("Enter the radius of the cylinder: "); // Taking rad & height of
    scanf("%f",&rad_cylinder);                    //  cylinder as input
    printf("Enter the height of the cylinder: ");
    scanf("%f",&height);

    float volume_cylinder;
    volume_cylinder = 3.14*rad_cylinder*rad_cylinder*height; // volume of cylinder
    printf("Volume of the cylinder: %f\n",volume_cylinder);
    
    return 0;
}
