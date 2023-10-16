#include "main.h"

/**
 * swap_int - take in two variable int and swap them
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
