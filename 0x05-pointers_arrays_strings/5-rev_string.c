#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer points to the string
 * Return: 0
 */
void rev_string(char *s)
{
int length, j, i;
char c1, c2;
for (length = 0; s[length] != '\0'; length++)
{
}
j = length - 1;
i = 0;
while (j > i)
{
c1 = s[i];
c2 = s[j];
s[i] = c2;
s[j] = c1;
j--;
i++;
}
}
