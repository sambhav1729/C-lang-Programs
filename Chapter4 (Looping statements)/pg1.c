# include <stdio.h>

int main()
{
    // while loops
    // Program to print counting of numbers using the inputs given by the user
    
    int i,n;
    printf("Enter the starting number of counting: "); // taking first no. of counting as input
    scanf("%d", &i);
    
    printf("\n");

    printf("Enter the ending number of counting: "); // taking last no. of counting as input
    scanf("%d", &n);

    while (i<=n){    // test condition
        printf("%d\n",i); // prints i
        i = i+1;   // increment value of i by 1
    }


    /* int i=1
    while (i<10){         // this loop is an infinite loop because we haven't 
        printf("%d\n",i); // given the increment value to i. So the test condition
    }*/                   // will always remain true & loop executes indefinetly.


 /* An infinite while loop is created when the given condition is always true. It        is encountered by programmers in when:

   # The test condition is incorrect.
   # Updation statement not present. */

    return 0;
}

