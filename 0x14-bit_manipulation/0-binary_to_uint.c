#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i;

	val = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		val <<= 1;
		if (b[i] == '1')
			val += 1;
	}
	return (val);
}
