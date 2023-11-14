# include <stdio.h>

int main()
{
    // for loops
    // Program to print first "n' natural numbers in reverse order

    int i,n;
    printf("Enter the value of n: "); // taking value of "n" as input from user
    scanf("%d", &n);

    for (i=n;i;i--){     // initialising value of i to n 
        printf("%d\n",i); // i-- = decrementing value of i by 1
    }                     // when the value of i==0, the loop will stop


    /*for (i=n;i<=n;i--){    // this is an infinite loop in reverse order
        printf("%d\n",i);
    }*/

    /*for (i=n;i;i++){      // this will be an infinite loop with starting value n
        printf("%d\n",i);
    }*/

    return 0;
}

