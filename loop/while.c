#include <stdio.h>

int main()
{

    int i = 0;
    int square = 0;

    // Write a while loop here:
    while (i < 10)
    {
        printf("%d\t%d\n", i, i * i);
        i++;
    }
}

// Compiling
/*
1. gcc while.c -o while
2. ./while

or

1. gcc while.c -o a.out
2. ./while
*/