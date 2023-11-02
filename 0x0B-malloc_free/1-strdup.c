#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bam;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bam = malloc(sizeof(char) * (i + 1));

	if (bam == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bam[r] = str[r];
	return (bam);
}
