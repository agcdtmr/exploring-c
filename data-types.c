#include <stdio.h>

int main()
{

    // Fix the missing data types
    int studentRank;
    float studentFeeTotal;
    char studentGradeLetter;

    // No need to make any changes below here, use these as a hint to how each variable above should be declared
    studentRank = 1;
    studentFeeTotal = 100.56;
    studentGradeLetter = 'A';

    printf("Student's Rank in class: %dst\n", studentRank);
    printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
    printf("Student's Grade: %c\n", studentGradeLetter);
}

// Compiling
/*
1. gcc data-types.c -o data-types
2. ./data-types

or

1. gcc data-types.c -o a.out
2. ./data-types
*/
