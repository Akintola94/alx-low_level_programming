#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @size: the size of array
 * @c: char assigned
 * Return: pointer to array, Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	cr = malloc(sizeof(char) * size);
	if (size == 0 || cr == NULL)
		return (Null);

	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
