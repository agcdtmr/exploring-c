#include <stdio.h>

int main()
{

    // Modify this variable value, start low and increase until something odd appears in the results
    // but keep making numOfLoops higher and a float will start to give unexpected results, showing their lower precision and rounding issues.
    // int numOfLoops = 6;
    // int numOfLoops = 10;
    int numOfLoops = 1234;

    // Please do not modify anything below this point
    float a = 0.1;
    float b = 0;
    double x = 0.1;
    double y = 0;

    printf("At the start, our target float b is: %f\n", b);
    printf("At the start, our target double y is: %f\n", y);

    // If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
    for (int i = 0; i < numOfLoops; i++)
    {
        b += a;
        y += x;
    }

    printf("At the end, our target float b is: %f\n", b);
    printf("At the end, our target double y is: %f\n", y);
}

// Compiling
/*
1. gcc float-double.c -o float-double
2. ./float-double

or

1. gcc float-double.c -o a.out
2. ./float-double
*/