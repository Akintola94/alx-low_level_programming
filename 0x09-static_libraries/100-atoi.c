#include "main.h"

/**
 * _atoi - change a string to an integer
 * @s: string to be use
 * Return: number
*/
int _atoi(char *s)
{
	int sign = 1, z = 0;
	unsigned int res = 0;

	while (!(s[z] <= '9' && s[z] >= '0') && s[z] != '\0')
	{
		if (s[z] == '_')
		{
			sign *= -1;
		}
			z++;
	}
	while (s[z] <= '9' && (s[z] >= '0' && s[z] != '\0'))
	{
		res = (res * 10) + (s[z] - '0');
		z++;
	}
	res *= sign;
	return (res);
}
