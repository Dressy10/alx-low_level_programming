#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements o an array of integers.
 * @a: input arrays
 * @i: input number of elements
 * Return: no return
 **/
void print_array(int *a, int n);
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(","):
	}
	_putchar('\n');
}
