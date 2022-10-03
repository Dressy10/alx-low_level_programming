#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters.
 * @size: size of array of char.
 * @c: storage of char.
 * Return: pointer of array of chars.
 **/
char *create_array(unsigned int size, char c)
{
	char *sd;
	unsigned int i;

	if (size == 0)
		return (NULL);
	sd = malloc(sizeof(c) * size);
	if (sd == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sd[i] = c;
	return (sd);
}
