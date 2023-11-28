# include <stdio.h>

int main()
{
    // Program to calculate factorial of a number

    int i,n;
    printf("Enter a number: "); // taking an input number from user 
    scanf("%d", &n);
    
    int factorial = 1; // declaraing a factorial variable

    for (i=1;i<=n;i++){
        factorial = factorial*i;
    }
    
    printf("The factorial of %d is = %d\n",n,factorial);

    return 0;
}

