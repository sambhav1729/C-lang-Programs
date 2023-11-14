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

    while (i<=n){
        printf("%d\n",i); // prints i
        i = i+1;   // increment value of i by 1
    }

    return 0;
}

