#include <stdio.h>

int main()
{

    // double ph = 7.9;
    // double ph = 4.6;
    double ph = 7;

    // Start the if, else if, else here:
    if (ph > 7)
    {
        printf("Basic\n");
    }
    else if (ph < 7)
    {
        printf("Acidic\n");
    }
    else
    {
        printf("Neutral\n");
    }
}

// Compiling
/*
1. gcc elseif.c -o elseif
2. ./elseif

or

1. gcc elseif.c -o a.out
2. ./elseif
*/