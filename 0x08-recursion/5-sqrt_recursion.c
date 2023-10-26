#include "main.h"

int sqrt_toxy(int n, int i);
/**
 * _sqrt_recursion - main function
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_toxy(n, 1));
}

/**
 * sqrt_toxy - _sqrt_recursion
 * @n: integer
 * @i: integer
 * Return: sqrt
 */
int sqrt_toxy(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_toxy(n, i + 1));
}
