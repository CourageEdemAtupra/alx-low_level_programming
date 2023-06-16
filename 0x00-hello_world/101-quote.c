
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specified message to the standard error using the
 * write system call.
 *
 * Return: 1 on successful execution
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

