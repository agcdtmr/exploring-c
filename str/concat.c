#include <stdio.h>
#include <string.h>

int main()
{

    char s1[] = "London";
    char s2[] = " Bridge";

    char n[] = "New";
    char y[] = " York";
    char c[] = " City";

    // Concatenate strings s1 and s2 and print the result, include a new line at the end of the output.
    strcat(s1, s2);
    printf("%s\n", s1);
    // Concatenate the strings n, y, c and print the result.
    strcat(n, y);
    strcat(n, c);
    printf("%s\n", n);
}