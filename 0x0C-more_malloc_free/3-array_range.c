#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers
 * @min: least value
 * @max: highest value
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ary
	int f;

	if (min > max)
		return (NULL);

	ary = malloc(sizeof(*ary) * ((max - min) + 1));

	if (ary == NULL)
		return (NULL);

	for (f = 0; min <= max; f++, min++)
		ary[f] = min;
	return (ary);
}
