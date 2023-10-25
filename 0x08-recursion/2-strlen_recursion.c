#include "main.h"

/**
 * _strlen_recursion - it returns the length of a string
 * @s: points to the string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
