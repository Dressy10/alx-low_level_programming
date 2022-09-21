#include "main.h"
/**
 * reverse_array - reverse the content of an array.
 * @a: array.
 * @n: number of elements.
 * Return: no return.
 **/
void reverse_array(int *a, int n)
{
	int s, d, temp;

	for (s = 0; s < n - 1; s++)
	{
		for (d = s + 1; d > 0; d--)
		{
			temp = *(a + d);
			*(a + d) = *(a + (d - 1));
			*(a + (d - 1)) = temp;
		}
	}
}
