#include "main.h"

/**
 * _strcmp - match string values
 * @s1: insert value
 * @s2: insert value
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int g;

	g = 0;

	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
	g++;
	}
	return (0);
}
