#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to link
 * @s2: second string to link
 * Return: pointer of the new allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *mar;
	int m, n, j, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (n = 0; s2[n] != '\0'; n++)
		;

	mar = malloc(m + n + 1);

	if (mar == NULL)
	{
		free(mar);
		return (NULL);
	}

	for (j = 0; j < m; j++)
		mar[j] = s1[j];

	/*limit = n;*/
	for (limit = 0; limit <= n; j++, limit++)
		mar[j] = s2[limit];

	return (mar);
}
