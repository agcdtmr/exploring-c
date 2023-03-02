#include <stdio.h>

int main()
{

    int number1 = 1;
    int number2 = 1;
    int numbers_entered1 = 0;
    int numbers_entered2 = 0;

    while (numbers_entered1 < 10)
    {
        printf("Loop 1 - Please enter a number: ");
        scanf("%d", &number1);

        while (number2 > 0 && numbers_entered2 < 10)
        {
            printf("Loop 2 - Please enter a number: ");
            scanf("%d", &number2);
        }

        // Figure out how to break out here!
        if (number1 <= 0)
        {
            break;
        }

        numbers_entered1++;
        numbers_entered2++;
    }

    printf("Good job! You’ve broken out!\n");
}

// Compiling
/*
1. gcc break.c -o break
2. ./break

or

1. gcc break.c
2. ./a.out
*/
