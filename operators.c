#include <stdio.h>

int main()
{

    int a = 10;
    int b = -5;

    if (a > 0 || b > 0)
    {
        printf("Positive\n");
    }

    if (a > 0 && !(b > 0))
    {
        printf("Positive too");
    }
}

// Compiling
/*
1. gcc operators.c -o operators
2. ./operators

or

1. gcc operators.c -o a.out
2. ./operators
*/