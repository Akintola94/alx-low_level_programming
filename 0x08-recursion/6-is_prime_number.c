#include "main.h"

int tmp_prime(int n, int i);

/**
 * divider - if input integer is a prime number
 * @n: integer
 * @m: integer
 * Return: zero if integer
 */

int divider(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divider(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @n: integer
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divider(3, n));
	}
}
