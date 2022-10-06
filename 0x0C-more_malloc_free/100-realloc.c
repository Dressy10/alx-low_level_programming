#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the last allocated memory.
 * @old_size: old size in bytes.
 * @new_size: new size in bytes.
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
