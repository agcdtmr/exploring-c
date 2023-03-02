#include <stdio.h>

int main()
{

    for (int i = 0; i < 15; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d is odd\n", i);
    }
}

// Compiling
/*
1. gcc continue.c -o continue
2. ./continue

or

1. gcc continue.c
2. ./a.out
*/
