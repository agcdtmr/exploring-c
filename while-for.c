#include <stdio.h>

int main()
{

    // While loop
    // int i = 99;
    // while (i > 0) {
    //     printf("%d bottles of pop on the wall.\n", i);
    //     printf("Take one down and pass it around.\n");
    //     printf("%d bottles of pop on the wall.\n", i - 1);
    //     i--;
    //   }

    // for loop
    for (int i = 99; i > 0; i--)
    {
        printf("%d bottles of pop on the wall.\n", i);
        printf("Take one down and pass it around.\n");
        printf("%d bottles of pop on the wall.\n", i - 1);
    }
}

// Compiling
/*
1. gcc while-for.c -o while-for
2. ./while-for

or

1. gcc while-for.c -o a.out
2. ./while-for
*/
