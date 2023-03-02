#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
}

// Compiling
/*
1. gcc for-cont.c -o for-cont
2. ./for-cont

or

1. gcc for-cont.c
2. ./a.out
*/