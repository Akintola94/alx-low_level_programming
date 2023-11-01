#include "main.h"

/**
 * _strncat - this function links two strings
 * @dest: the value inserted
 * @src: the value inserted
 * @n: the value inserted
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int r;

	int i;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}

	i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[r] = src[i];
	r++;
	i++;
	}
	dest[r] = '\0';
	return (dest);
}
