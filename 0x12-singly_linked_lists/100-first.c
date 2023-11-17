#include <stdio.h>

void initialnode(void)__attribute__((constructor));

/**
 * initialnode - start before main
 * @void: input.
 */
void initialnode(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
