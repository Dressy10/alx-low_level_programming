#include "main.h"
/**
 * factorial - returns the factorial of an integer.
 * @n: number of integer.
 * Return: factorial of an integer.
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
