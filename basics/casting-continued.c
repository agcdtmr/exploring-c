#include <stdio.h>

int main()
{

    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;

    // Cast here
    targetChar = (char)sourceInt;

    targetChar = sourceDouble;
    // No need to change below here
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);
}

// Compiling
/*
1. gcc casting-continued.c -o casting-continued
2. ./casting-continued

or

1. gcc casting-continued.c -o a.out
2. ./casting-continued
*/
