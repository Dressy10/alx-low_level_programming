#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: input string.
 * Return: 1 if string is palindrome and 0 if not.
 **/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
