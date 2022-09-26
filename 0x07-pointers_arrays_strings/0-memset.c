#include "main.h"
/**
 * _memset - fills a memory with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		*(s + d) = b;
	return (s);
}
