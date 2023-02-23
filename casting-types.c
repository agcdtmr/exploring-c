#include <stdio.h>

int main()
{

    double testScore = 95.7;
    // wrong:   int displayScore = testScore;
    int displayScore = (int)testScore;

    // No need to change below here
    printf("Great work, you got a %d%% on your test\n", displayScore);
}

// Compiling
/*
1. gcc casting-types.c -o casting-types
2. ./casting-types

or

1. gcc casting-types.c -o a.out
2. ./casting-types
*/
