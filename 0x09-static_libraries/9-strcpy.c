#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: echo to
 * @src: echo from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;

	int t = 0;

	while (*(src + s) != '\0')

	{
		s++;
	}
	for (; t < s ; t++)
	{
		dest[t] = src[t];
	}
	dest[s] = '\0';
	return (dest);
}
