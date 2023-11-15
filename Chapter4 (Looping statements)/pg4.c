# include <stdio.h>

int main()
{
    // break statement in loops
    int i;
    i = 1;  // initialising value of i to 1
    while (i<=20){
        if (i==11){  // when i will be 11, the loop will break
            break;
        }
        printf("%d\n",i);
        i = i+1;    // incrementing value of i by 1
    }
    
    // Output: 1,....,10

    return 0;
}

