#include <stdio.h>

/**
 * main - fibonacci_sum.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first = 1;
int second = 2;
int sum = 0;
int even_sum = 0;

while (first <= 4000000)
{
if (first % 2 == 0)
{
even_sum += first;
}

sum = first + second;
first = second;
second = sum;
}

printf("%d\n", even_sum);

return (0);
}
