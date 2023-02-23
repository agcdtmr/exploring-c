#include <stdio.h>

int main()
{

    int endingDayOfWeek = 0;
    int daysThatPass = 4;
    int daysInWeek = 7;

    endingDayOfWeek = daysThatPass % daysInWeek;

    printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);
}

// Compiling
/*
1. gcc modulo.c -o modulo
2. ./modulo

or

1. gcc modulo.c -o a.out
2. ./modulo
*/
