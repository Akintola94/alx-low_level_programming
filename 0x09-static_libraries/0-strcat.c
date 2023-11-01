#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to which src will be appended
 * @src: string to be appended to dest
 * Return: null
 */
char *_strcat(char *dest, char *src)
{
	int g;

	int n;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	n = 0;
	while  (src[n] != '\0')
	{
		dest[g] = src[n];
		g++;
		n++;
	}
		dest[g] = '\0';
		return (dest);
}

