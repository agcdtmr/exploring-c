#include <stdio.h>

int main()
{

    // int i = 0;
    int i = 11;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);
}

// Compiling
/*
1. gcc do-while.c -o do-while
2. ./do-while

or

1. gcc do-while.c -o a.out
2. ./do-while
*/
