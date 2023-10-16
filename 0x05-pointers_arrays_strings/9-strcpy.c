#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, includin \0
 * @src:  pointer
 * @dest: pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int z = -1;
do {
z++;
dest[z] = src[z];
} while (src[z] != '\0');
return (dest);
}
