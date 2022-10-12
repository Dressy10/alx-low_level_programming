#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter.
 * @size: size of the array.
 * @array: input integer array.
 * @action: pointer to function.
 * Return: no return.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; size++)
			action(array[i]);
}
