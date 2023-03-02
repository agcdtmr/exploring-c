#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
    char p[] = "poolloop";
    // replace every character in the string with the character '*'.
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = '*';
    }
    printf("%s\n", s);

    // Loop through the string and replace the first half with '#'s
    for (int j = 0; j < strlen(p) / 2; j++)
    {
        p[j] = '#';
    }

    printf("%s", p);
}