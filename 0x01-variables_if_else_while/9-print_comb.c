#include <stdio.h>
/**
 * main - combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');

if (i != 9)
{
if (i != 8)
putchar(',');
putchar(' ');
}
}

putchar('\n');

return 0;
}