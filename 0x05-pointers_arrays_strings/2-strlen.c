#include "main.h"

/**
 * _strlen - calculate the length of the string
 * @s: -string to be calculated
 * Return: the length of the string
 */
int _strlen(char *s)
{
int string_length = 0;

while (s[string_length])
{
string_length++;
}
return (string_length);
}
