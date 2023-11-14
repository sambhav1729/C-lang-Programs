# include <stdio.h>

int main()
{
    // do-while loops
    // Program to print first "n" natural numbers & finding their sum

    int i,n;
    printf("Enter the value of n: "); // taking value of "n" as input from user
    scanf("%d", &n);
    
    i = 1; // initialising value of i
    
    do {
        printf("%d\n",i); // printing value of i
        i = i+1;  // incrementing value of i by 1
    }
    while(i<=n); // test condition

    printf("_ _ _ _ _ _ _ _ _\n");
    int sum;
    sum = (n*(n+1))/2;  // sum of first "n" numbers formula
    printf("\nSum of first %d numbers = %d\n",n,sum);
    
    return 0;
}

