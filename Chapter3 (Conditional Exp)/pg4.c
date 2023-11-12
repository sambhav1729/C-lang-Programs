# include <stdio.h>

int main()
{
    // Check weekday using a number

    int num;   // initialising weekday number
    printf("Enter a number between (1-7): ");
    scanf("%d", &num);

    switch (num){     // declaraing weekdays based on number entered by user
        case 1:
            printf("It's Sunday\n");
            break;

        case 2:
            printf("It's Monday\n");
            break;

        case 3:
            printf("It's Tuesday\n");
            break;

        case 4:
            printf("It's Wednesday\n");
            break;

        case 5:
            printf("It's Thursday\n");
            break;

        case 6:
            printf("It's Friday\n");
            break;

        case 7:
            printf("It's Saturday\n");
            break;

        default:
            printf("Invalid Number\n");
    }

    return 0;
}

