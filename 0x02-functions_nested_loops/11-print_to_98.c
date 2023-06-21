#include "main.h"

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
while (1)
{
_putchar(n + '0');

if (n == 98)
break;

_putchar(',');

if (n < 98)
n++;
else
n--;

_putchar(' ');
}

_putchar('\n');
}
