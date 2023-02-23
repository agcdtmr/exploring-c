#include <stdio.h>

int main()
{

    int grade1 = 90;
    int grade2 = 59;

    if (grade1 > 60)
    {
        printf("Pass\n");
    }

    if (grade2 < 60)
    {
        printf("Fail");
    }
}

// Compiling
/*
1. gcc if.c -o if
2. ./if

or

1. gcc if.c -o a.out
2. ./if
*/