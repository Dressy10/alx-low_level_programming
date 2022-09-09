#include <stdio.h>
/**
 *  main - Print all single numbers of base 10 starting from 0 (0-9).
 *
 *  Return: Always 0 (Success)
 **/
int main(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
