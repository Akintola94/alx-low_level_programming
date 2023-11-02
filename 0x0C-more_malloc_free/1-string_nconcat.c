#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: total number of bytes
 * Return: pointer to a newly allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *scount
	unsigned int ls1, ls2, lscount, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (s2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lscount = ls1 + n;
	scount = malloc(lscount + 1);
	if (scount == NULL)
		return (NULL);

	for (i = 0; i < lscount; i++)
		if (i < ls1)
		scount[i] = s1[i];
	else
		scount[i] = s2[i - ls1];
		scount[i] = '\0';
	return (scount);
}
