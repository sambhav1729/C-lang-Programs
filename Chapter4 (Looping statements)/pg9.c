# include <stdio.h>

int main()
{
    // Program to calculate factorial of a number

    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int factorial = 1;

    for (i=1;i<=n;i++){
        factorial = factorial*i;
    }
    
    printf("The factorial of %d is = %d\n",n,factorial);

    return 0;
}

