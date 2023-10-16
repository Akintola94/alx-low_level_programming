#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 *@s: the string to print in reverse
 *
 */

void print_rev(char *s)
{
int h = 0;
while (s[h])
h++;
while (h--)
_putchar(s[h]);
_putchar('\n');
}
