#include "main.h"
/**
 * _puts - puts a string follwed by a new line.
 * @str: input string
 * Return: no return
 **/
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
		}
		_putchar(str[count]);
		count++;
	}
}