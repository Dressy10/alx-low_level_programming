#include <stdio.h>
/**
 *  main  Prints the alphabets in a reverse manner.
 *
 *  Return: Always 0 (Success)
 **/
int main(void)
{
	int i;
	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
