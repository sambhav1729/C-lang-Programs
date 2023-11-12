#include <stdio.h>
#include <math.h>

int main()
{
    // Type declaration instruction 
    int a = 45;    
    printf("Value of a is %d\n",a);
    int b = a + 10;  // C compiler follows sequential order of declaration
    // int a = 45;  This will throw error after compilation of program
    printf("Value of b is %d\n",b);
    printf("\n");

    // Arithmetic instruction
    int num1,num2;
    printf("Enter number1: \n");
    scanf("%d",&num1);
    printf("Enter number2: \n");
    scanf("%d",&num2);
    printf("\n");

    printf("The sum of num1 & num2: %d\n",num1+num2);
    printf("The subtraction of num1 & num2: %d\n",num1-num2);
    printf("The multiplication of num1 & num2: %d\n",num1*num2);
    printf("The division of num1 & num2: %d\n",num1/num2);
    printf("The remainder when num1 is divided by num2: %d\n",num1%num2);
    printf("\n");

    printf("Value of expression 3*x-5*y is: %d\n",3*5-5*10);
    printf("\n");

    double n1,n2;
    printf("Enter number x: \n");
    scanf("%lf",&n1); 
    printf("Enter number y: \n");
    scanf("%lf",&n2);
    printf("\n");

    double result = pow(n1,n2); // we can set decimal precision by using a (.)with number
    printf("x raised to power y = %.2lf\n",result); // before format specifier

    return 0;
}

