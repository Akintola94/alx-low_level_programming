#include "main.h"

/**
 * _pow_recursion - returns value of x raise to the power of y
 * Return: -1 is returned when y is lower than 0
 * @x: integer
 * @y: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
