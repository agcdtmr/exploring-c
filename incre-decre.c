#include <stdio.h>

int main()
{
    int n = 13;
    int m = 10;
    m--;
    n++;

    printf("m = %d\n", m);
    printf("n = %d\n", n);
}

// Compiling
/*
1. gcc incre-decre.c -o incre-decre
2. ./incre-decre

or

1. gcc incre-decre.c -o a.out
2. ./incre-decre
*/
