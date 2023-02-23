#include <stdio.h>

int main()
{

    int x = 1;
    int y = 27;

    if (x != y && y > x)
    {
        printf("Congratulations on setting up a comparison correctly!");
    }
    else
    {
        printf("Please try again!");
    }
}

// Compiling
/*
1. gcc logic.c -o logic
2. ./logic

or

1. gcc logic.c -o a.out
2. ./logic
*/