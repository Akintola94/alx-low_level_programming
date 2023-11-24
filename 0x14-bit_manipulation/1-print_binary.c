#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int div;

	for (b = 63; b >= 0; b--)
	{
		div = n >> 1;

		if (div & 1)
		{
			_putchar ('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
