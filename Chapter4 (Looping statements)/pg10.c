# include <stdio.h>

int main()
{
    // Program to check whether a given number is prime or not
    
    int i,n;
    printf("Enter a number: "); // taking an input number from user
    scanf("%d", &n);
    
    int prime = 1;  // declaraing a prime variable
    // this variable is created for the end if-else block to check for prime number condition
    // we can give any value to prime variable

    for (i=2;i<n;i++){
        if (n%i==0){    // if remainder becomes 0, then value of prime will be 0
            prime = 0;  // & the loop will exit
            break;
        }
    }
    
    if (prime == 0){    // executes if prime will be 0
        printf("%d is not a prime number\n",n);
    }
    else{              // executes if prime is not equal to 0
        printf("%d is a prime number\n",n);
    }

    return 0;
}

