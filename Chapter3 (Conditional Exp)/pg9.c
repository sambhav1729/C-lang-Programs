# include <stdio.h>

int main()
{
    // Program to find greatest of four numbers entered by user

    float n1,n2,n3,n4;  // initialising input numbers
    printf("Enter first number: ");
    scanf("%f", &n1);  // taking input from user

    printf("Enter second number: ");
    scanf(" %f", &n2);

    printf("Enter third number: ");
    scanf(" %f", &n3);

    printf("Enter fourth number: ");
    scanf(" %f", &n4);

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("\n");

    if (n1>n2 & n1>n3 & n1>n4){
        printf("%.2f is the greatest number!\n",n1);
    }

    else if (n2>n1 & n2>n3 & n2>n4){
        printf("%.2f is the greatest number!\n",n2);
    }

    else if (n3>n2 & n3>n1 & n3>n4){
        printf("%.2f is the greatest number!\n",n3);
    }

    else if (n4>n2 & n4>n3 & n4>n1){
        printf("%.2f is the greatest number!\n",n4);
    }

    else {
        printf("All four numbers are equal!\n");
    }


    return 0;
}

