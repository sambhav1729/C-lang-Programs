# include <stdio.h>

int main()
{
    // Calculator using Switch Case statements

    char operator;  // initialising arithmetic operator
    printf("Enter Arithmetic Operator: ");
    scanf("%c",&operator);
    printf("\n");

    int num1,num2;  // initialising input numbers
    printf("Enter number1:  ");
    scanf(" %d", &num1);          // taking input from user 
    printf("Enter number2:  ");
    scanf(" %d", &num2);
    printf("\n");

    switch (operator){   // operator checking & arithmetic calculation
        case '+' :
            printf("Addition of number1 & number2: %d\n",num1+num2);
            break;

        case '-' :
            printf("Subtraction of number1 & number2: %d\n",num1-num2);
            break;

        case '*' :
            printf("Multiplication of number1 & number2: %d\n",num1*num2);
            break;

        case '/' :
            printf("Division of number1 / number2: %d\n",num1/num2);
            break;

        default :
            printf("Invalid operator\n");
    }

    return 0;
}

