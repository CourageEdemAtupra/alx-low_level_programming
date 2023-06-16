#include <stdio.h>

/**
 * main - prints all  base 10 starting from 0,then new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + '0');
}

putchar('\n');

return (0);
}

