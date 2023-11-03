#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concentate two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *scount;
	unsigned int scount1, scount2, iscount, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (scount1 = 0; s1[scount1] != '\0'; scount1++)
		;

	for (scount2 = 0; s2[scount2] != '\0'; scount2++)
		;

	if (n > scount2)
		n = scount2;

	iscount = scount1 + n;

	scount = malloc(iscount + 1);

	if (scount == NULL)
		return (NULL);
	for (i = 0; i < iscount; i++)
	{
		if (i < scount1)
		{
			scount[i] = s1[i];
		}
		else
		{
			scount[i] = s2[i - scount1];
		}
	}
			scount[i] = '\0';

			return (scount);
}
