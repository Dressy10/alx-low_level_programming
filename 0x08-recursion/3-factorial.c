#include "main.h"
/**
 * factorial - returns the factorial o an integer.
 * @n: number of integer.
 * Return: factorial of an integer.
 **/
int factorial(int n)
{
	int n = 0;
	
	if (n < 0)
		return (0);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
