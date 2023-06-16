#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - storeds in the variable n is positive or negative.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%d is ", n);

if (n > 0)
printf("positive\n");
else if (n == 0)
printf("zero\n");
else
printf("negative\n");

return (0);
}
