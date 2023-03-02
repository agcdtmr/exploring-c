#include <stdio.h>

int main()
{
    char p[] = "procezzor";
    // Print the third character of the string p.
    printf("%c\n", p[2]);
    // Correct the mistake and print the string to the console.
    p[5] = 's';
    p[6] = 's';
    printf("%s", p);
}