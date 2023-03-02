#include <stdio.h>

int main()
{

    int a = 10;
    int b = 5;
    int min;

    // Print out the smaller number with return
    min = a < b ? a : b;
    printf("%d\n", min);

    // Print out the smaller number without return
    a < b ? printf("%d\n", a) : printf("%d\n", b);
}

// Compiling
/*
1. gcc ternary.c -o ternary
2. ./ternary

or

1. gcc ternary.c -o a.out
2. ./ternary
*/
