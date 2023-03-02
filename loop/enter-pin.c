#include <stdio.h>

int main()
{
    int pin = 0;
    int tries = 0;

    printf("BANK OF CODECADEMY:\n");
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    tries++;

    while (pin != 1234 && tries < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);
        tries++;
    }

    if (pin == 1234)
    {
        printf("PIN accepted!\n");
        printf("You now have access.\n");
    }
}

// Compiling
/*
1. gcc enter_pin.c -o enter_pin
2. ./enter_pin

When the program asks you to Enter your PIN:, try the following:

Type 1111 and press enter.

Type 2021 and press enter.

Type 1234 and press enter.

or

1. gcc enter_pin.c -o a.out
2. ./enter_pin

When the program asks you to Enter your PIN:, try the following:

Type 1111 and press enter.

Type 2021 and press enter.

Type 1234 and press enter.
*/