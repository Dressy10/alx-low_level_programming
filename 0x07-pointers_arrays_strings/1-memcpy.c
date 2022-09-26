#include "main.h"
/**
 * _memcpy - copies memory data.
 * @dest: destination.
 * @src: source.
 * @n: bytes filled.
 * Return: the pointer to dest.
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		*(dest + d) = *(src + d);
	return (dest);
}
