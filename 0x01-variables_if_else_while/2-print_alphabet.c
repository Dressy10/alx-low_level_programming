#include <stdio.h>
/**
 *  main - Prints out the alphabet.
 *
 *  Return: Always 0 (Success)
 **/
int main(void)
{
	char alp[26] = "abcdefgjijklmnopqrstuvwxyz";
	int i;
	for (i = 0; 1 < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
