#include "main.h"

void print_number(int n);

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
print_number(i);
else
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i != 98)
print_number(i);
else
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}

_putchar('\n');
}

/**
 * print_number - Prints a number using _putchar
 * @n: The number to print
 */
void print_number(int n)
{
if (n / 10 != 0)
print_number(n / 10);

_putchar(n % 10 + '0');
}

