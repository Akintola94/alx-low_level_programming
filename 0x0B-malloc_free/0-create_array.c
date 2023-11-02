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
	char *ch;
	unsigned int i;

	ch = malloc(sizeof(char) * size);
	if (size == 0 || ch == NULL)
		return (Null);

	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
