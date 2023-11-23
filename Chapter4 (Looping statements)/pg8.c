# include <stdio.h>

int main()
{
    // Program to print sum of numbers occuring in table of n 

    int i,n;
    printf("Enter the number n: "); // taking input number from user of which we want to print table of 
    scanf("%d", &n);
    printf("\n");
    printf("Table of %d:\n",n);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);  // n x i = n*i
    }
    
    printf("\n");

    int sum;
    sum = (10/2)*(2*n + 9*n);  // formula to calculate sum of all multiples 
    printf("Sum of all multiples of %d = %d\n",n,sum);

    return 0;
}

