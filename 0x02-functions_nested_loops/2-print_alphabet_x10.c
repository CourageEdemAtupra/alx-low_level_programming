#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 then a new line
 */
void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}

_putchar('\n');
}
}
