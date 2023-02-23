#include <stdio.h>

int main()
{

    int x;
    int y;

    x = (2 + 3) * 5;
    y = 2 / (4 + 6);

    printf("x is: %d\n", x);
    printf("y is: %d\n", y);
}

// Compiling
/*
1. gcc oper-order.c -o oper-order
2. ./oper-order

or

1. gcc oper-order.c -o a.out
2. ./oper-order
*/