#include <stdio.h>
/**
 * main - base 16 in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char digit;
int count = 0;

for (digit = '0'; digit <= 'f'; digit++)
{
if ((digit >= '0' && digit <= '9') || (digit >= 'a' && digit <= 'f'))
{
 putchar(digit);
count++;
}

if (count == 16)
break;
}

putchar('\n');

return 0;
}

