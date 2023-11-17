#include <stdio.h>

void initial_node(void)__attribute__((constructor));

/**
 * initial_node - start before main
 * @void: input.
 */
void initial_node(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
