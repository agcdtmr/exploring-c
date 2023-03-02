#include <stdio.h>

int main()
{

    int numOfBooks = 6;
    char favLetter = 'r';
    char favDigit = '9';
    double costOfCandyBar = 7;

    printf("Number of books: %d\n", numOfBooks);
    printf("Your Favorite Letter is: %c\n", favLetter);
    printf("Your Favorite Digit is: %c\n", favDigit);
    printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);
}

// Compiling
/*
1. gcc char-initial.c -o char-initial
2. ./char-initial

or

1. gcc char-initial.c -o a.out
2. ./char-initial
*/
