#include "main.h"
/**
 * print_most_numbers - prints numvers
 * (neither 2 nor 4)
 * Return: no return.
 **/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' &&  i != '4')
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
