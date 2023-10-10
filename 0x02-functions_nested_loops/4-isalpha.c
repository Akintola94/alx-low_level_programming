#include "main.h"

/**
*_isalpha - Checks for alphabetic order
* @c: The character to check for
*
* Return: On sucess 1.
* On error, 0 is returned.
*/
int _isalpha(int c)
{
	 c = (char)c;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
