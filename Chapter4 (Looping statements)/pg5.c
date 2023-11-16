# include <stdio.h>

int main()
{
    // continue statement in loops 
    int i;
    i = 1;  // initialising value of i to 1

    while (i<=20){
        if (i==11){  // when i will be 11, the loop will move to next value of i 
            i++;  // if we dont't include i++, then this loop will be an infinite loop
            continue;
        }
        printf("%d\n",i);
        i = i+1; // incrementing value of i by 1
    }

    // Output: 1,....,10,12,...20

    return 0;
}

