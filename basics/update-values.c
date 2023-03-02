#include <stdio.h>

int main()
{

    // These varaibles were created and had a starting value for you, no need to change
    char bookVersionReview = 'A';
    char movieVersionReview = 'A';
    double ticketPrice = 10.25;
    double bookPrice = ticketPrice;

    // Update the movie review score here
    movieVersionReview = 'C';
    // Update the ticket price here
    ticketPrice = 7.50;

    // No need to change below here
    printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
    printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);
}

// Compiling
/*
1. gcc update-values.c -o update-values
2. ./update-values

or

1. gcc update-values.c -o a.out
2. ./update-values
*/
