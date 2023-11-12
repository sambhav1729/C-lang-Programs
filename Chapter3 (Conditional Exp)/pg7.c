# include <stdio.h>

int main()
{
    // Program to check whether a given year is a leapyear or not

    int year;    // intialising year variable
    printf("Enter the year: ");
    scanf("%d", &year);  // taking input year

    if (year%4==0){    // leap year comes in every 4 year
        printf("This is a leap year!\n");
    }

    else{
        printf("Not a leap year!\n");
    }

    return 0;
}

