#include <stdio.h>

int main()
{

    // Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
    const double SPEEDOFLIGHT = 1.86;
    int timeTraveledInSeconds = 30;

    // No need to change below here
    printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);
}

// Notes

// Best practice to use all upper case letters when declaring a constant:
// ex. const int DAYSINWEEK = 7;

// Compiling
/*
1. gcc constant.c -o constant
2. ./constant

or

1. gcc constant.c -o a.out
2. ./constant
*/
