#include <stdio.h>

int main()
{

    int grade1 = 59;
    int grade2 = 90;

    if (grade1 > 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    if (grade2 > 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
}

// Compiling
/*
1. gcc else.c -o else
2. ./else

or

1. gcc else.c -o a.out
2. ./else
*/