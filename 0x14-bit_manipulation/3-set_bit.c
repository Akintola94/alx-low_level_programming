#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}

	setbit <<= index;
	*n = *n | setbit;

	return (1);
}
