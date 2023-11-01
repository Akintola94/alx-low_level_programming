#include "main.h"

/**
 * _memset - set of memory with an assigned value
 * @s: memory to be filed
 * @b: desired value
 * @n: total number of bytes to be changed
 *Return: new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
