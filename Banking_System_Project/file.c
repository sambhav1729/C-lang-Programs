# include <stdio.h>
# include "bankfunction.h"

void login();
void new_acc();
void balance();
void aadhar();
void help();

int main(){

    printf("                Welcome to Banking System\n");
    printf("                -------------------------\n");
    printf("Note:\n");

    printf("# Press (1) for Login into your Account\n");
    printf("# Press (2) for Creating a New Account\n");
    printf("# Press (3) for Checking Bank Balance\n");
    printf("# Press (4) for Aadhar Seeding of Account\n");
    printf("# Press (5) for Help Regarding any Issue\n");

    printf("\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");

    switch (num){

        case 1:
           printf("                       Login Page\n");
           printf("                       ----------\n");
           login();
           break;
        
        case 2:
           printf("                 Create a New Account\n");
           printf("                 --------------------\n");
           new_acc();
           break;

        case 3:
           printf("                     Account Balance\n");
           printf("                     ---------------\n");
           balance();
           break;
           
        case 4:
           printf("                     Aadhar Seeding\n");
           printf("                     --------------\n");
           aadhar();
           break;
        
        case 5:
           printf("                     Facing an Issue\n");
           printf("                     ---------------\n");
           help();
           break;
        
        default:
           printf("                     Invalid input!\n");
    }

    return 0;
}

