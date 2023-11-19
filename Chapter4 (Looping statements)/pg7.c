# include <stdio.h>

int main()
{
    // Program to print multiplication table of 10 in reversed order

    int i;
    printf("Table of 10:\n");
    
    for(i=10;i;i--){
        printf("10 x %d = %d\n",i,10*i);
    }

    return 0;
}

