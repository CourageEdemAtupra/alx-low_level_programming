#include <stdio.h>
/**
 * main - base 10 starting from 0,followed by a new line
 *
 * Return: ::0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');
}

putchar('\n');

return (0);
}
