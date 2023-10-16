#include "main.h"

/**
 * puts2 - prints character of a string
 * @str: the used string reference
 * Return: 0
 */

void puts2(char *str)
{
int h = 0;
while (str[h] != '\0')
{
if (h % 2 == 0)
{
_putchar(str[h]);
}
h++;
}
_putchar('\n');
}
