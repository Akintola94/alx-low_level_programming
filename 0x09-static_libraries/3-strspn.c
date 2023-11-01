#include "main.h"

/**
 * _strspn - Entry point
 * @s: insert
 * @accept: insert
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				c++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
