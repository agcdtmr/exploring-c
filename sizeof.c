#include <stdio.h>

int main()
{
    double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
    int len;

    // Set the variable len to the length of the array arr.
    len = sizeof(arr) / sizeof(double);
    printf("%i\n", len);

    // Loop through the array and print the contents. Each element should be on a new line.
    for (int i = 0; i < len; i++)
    {
        printf("%f\n", arr[i]);
    }
}