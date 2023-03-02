#include <stdio.h>

int main()
{

    int i = 9;
    int square = 0;

    // Write a while loop here:
    while (i >= 0)
    {
        printf("%d\t%d\n", i, i * i);
        i--;
    }
}

// Compiling
/*
1. gcc desc-while.c -o desc-while
2. ./desc-while

or

1. gcc desc-while.c -o a.out
2. ./desc-while
*/
