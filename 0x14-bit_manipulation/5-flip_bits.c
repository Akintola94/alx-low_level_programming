#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another
 * @n: first number to be flipped
 * @m: second number to be flipped
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int b;

	for (b = 0; num; num >>= 1)
	{
		if (num & 1)
		{
			b++;
		}
	}
		return (b);
}
