#include <stdio.h>

int main()
{

    int timesServerCrashed = 5;
    double losses = 500.95;
    losses *= timesServerCrashed;
    losses /= 2;

    printf("Total Losses: $%.2f\n", losses);
}

// Compiling
/*
1. gcc shorthand.c -o shorthand
2. ./shorthand

or

1. gcc shorthand.c -o a.out
2. ./shorthand
*/
