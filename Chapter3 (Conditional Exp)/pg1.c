# include <stdio.h>

int main()
{
    // Voting age validator

    int age;
    printf("Enter your age: "); 
    scanf("%d", &age);
    printf("\n");

    if (age>18){
        printf("You are eligible to vote\n");
    }
    else{
        printf("Not eligible to vote\n");
    }

    return 0;
}

