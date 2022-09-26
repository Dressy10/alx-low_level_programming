#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: the point to what appears after c.
 **/
char *_strchr(char *s, char c)
{
	unsigned int d = 0;

	for (; *(s + d) != '\0'; d++)
		if (*(s + d) == c)
			return (s + d);
	if (*(s + d) == c)
		return (s + d);
	return ('\0');
}
