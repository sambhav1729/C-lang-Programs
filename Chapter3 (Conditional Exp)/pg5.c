# include <stdio.h>

int main()
{
    // Program to check whether a student is pass or fail

    int maths,physics,chemistry,english,hindi; // initialising subject marks
    
    printf("Enter marks of Math: ");      // taking subject marks as input from user
    scanf("%d", &maths);

    printf("Enter marks of Physics: ");
    scanf(" %d", &physics);

    printf("Enter marks of Chemistry: ");
    scanf(" %d", &chemistry);

    printf("Enter marks of English: ");
    scanf(" %d", &english);

    printf("Enter marks of Hindi: ");
    scanf(" %d", &hindi);
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    
    printf("\n");

    int total_marks;
    total_marks = maths + physics + chemistry + english + hindi;  // calculating total marks
    printf("Total Marks = %d\n",total_marks);
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

    printf("\n");

    if (total_marks>200 & maths>33 & physics>33 & chemistry>33 & english>33 & hindi>33){
        printf("You're Passed!\n");
    }

    else{
        printf("You're Failed!\n");
    }

         
    return 0;
}

