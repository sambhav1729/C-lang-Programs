# include <stdio.h>

int main()
{
    // Grading system

    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    // if - else if - else ladder

    if (marks>90 & marks<=100){
        printf("Your grade is A\n");
    }
    else if (marks>80 & marks<=90){
        printf("Your grade is B\n");
    }
    else if (marks>70 & marks<=80){
        printf("Your grade is C\n");
    }
    else if(marks>60 & marks<=70){
        printf("Your grade is D\n");
    }
    else if(marks>50 & marks<=60){
        printf("Your grade is E\n");
    }
    else if(marks>40 & marks<=50){
        printf("Your grade is F\n");
    }
    else{
        printf("You are failed\n");
    }

    printf("\n");

    // Marks range system

    char grade;
    printf("Please enter grades as capital letters A,B,C,D,E or F\n");
    printf("Enter your grade:  \n");
    scanf(" %c",&grade);

    if (grade=='A'){
        printf("Your marks lie in range 90-100\n");
    }
    else if (grade=='B'){
        printf("Your marks lie in range 80-90\n");
    }
    else if (grade=='C'){
        printf("Your marks lie in range 70-80\n");
    }
    else if (grade=='D'){
        printf("Your marks lie in range 60-70\n");
    }
    else if (grade=='E'){
        printf("Your marks lie in range 50-60\n");
    }
    else if (grade=='F'){
        printf("Your marks lie in range 40-50\n");
    }
    else {
        printf("Invalid input\n");
    }

    printf("\n");
    // Final Report Card

    printf("     Report Card\n");
    printf(" _____________________\n");
    printf("|__ Marks__|__ Grade__|\n");
    printf("|          |          |\n");
    printf("|    %d    |    %c     |\n",marks,grade);
    printf("|__________|__________|\n");

    return 0;
}

