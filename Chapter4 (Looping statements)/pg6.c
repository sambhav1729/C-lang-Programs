# include <stdio.h>

int main()
{
    // Program to print multiplication table of a number "n"

    int i,n;
    printf("Enter the number n: ");  // taking input number from user of which we wan't to print table of 
    scanf("%d", &n);
    printf("\n");
    printf("Table of %d:\n",n);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);   // n x i = n*i
    }

    return 0;
}

