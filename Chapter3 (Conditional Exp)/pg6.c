# include <stdio.h>

int main()
{
 /*   Income Tax
__________________________
   Income slab    Tax
__________________________
   2.5L - 5.0L     5%
   5.0L - 10.0L    20%
   Above 10.0L     30%
     */

    float income;   // initialising income variable
    printf("Enter Annual Income (in L.P.A): ");
    scanf("%f", &income);  // taking input from user
   
    printf("\n");

    if (income<2.5){
        printf("There is no income tax below 2.5lpa\n");
    }

    else if (income>=2.5 & income<5.0){             // tax calculation
        printf("Annual Income Tax = %.2f L.P.A\n",(5.0/100)*income);
    }

    else if (income>=5.0 & income<10.0){
        printf("Annual Income Tax = %.2f L.P.A\n",(20.0/100)*income);
    }

    else {
        printf("Annual Income Tax = %.2f L.P.A\n",(30.0/100)*income);
    }
    

    return 0;
}

