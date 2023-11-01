#include "main.h"

/**
 * _memcpy - this copies the memory area
 * @dest: this stores memory
 * @src: this copies the memory
 * @n: the number of bytes
 * Return: the copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
