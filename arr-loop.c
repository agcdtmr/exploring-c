#include <stdio.h>

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};

    int arr2[100];

    // Loop through array arr and print each element on a separate line.
    // The array contains 20 elements.
    for (int i = 0; i < 20; i++)
    {
        printf("%i\n", arr[i]);
    }
    // Given the integer array arr2, fill up the array so that each
    // element in the array is four plus the index of the element.
    for (int x = 0; x < 100; x++)
    {
        arr2[x] = x + 4;
    }
}