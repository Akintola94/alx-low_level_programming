#include "main.h"
#include <string.h>

/**
 *_strncat - function that concatenates two strings.
 *@dest: destination string pointer
 *@src: source string pointer
 * @n: number
 *Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = strlen(dest);
int b = 0;
while (b < n && *src)
{
dest[index + b] = *src;
src++;
b++;
}
dest[index + b] = '\0';
return (dest);
}
