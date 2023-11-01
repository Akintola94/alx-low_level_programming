#include <stdio.h>
#include "main.h"

/**
 * main - prints
 * @argc: number of argument
 * @argv: array of arument
 * Return: -0, -1
 */
int main(int argc, char *argv[])
{
	int num1, num2, yem;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num@ = atoi(argv[2]);
	yem = num1 * num2;

	printf("%d\n", yem);

	return (0);
}
