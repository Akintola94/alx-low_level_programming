#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
	return (-1);
	if (array == NULL || cmp == NULL)
	return (-1);

	for (k = 0; k < size; k++)
	{
	if (cmp(array[k]) == 1)
	return (k);
	}
	return (-1);
}
