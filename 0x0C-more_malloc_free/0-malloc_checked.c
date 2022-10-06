#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 * Return: to the allocated memory.
 **/
void *malloc_checked(unsigned int b)
{
	char *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);
	return (d);
}
