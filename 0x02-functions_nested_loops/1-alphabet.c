#include "main.h"

/** * print_alphabet - lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
