#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a pointer
 * @c: the character
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x] >= '\0')
	{
		if (s[x] == c)
		{
			return (s + x);
		}
		x++;
	}
	return (NULL);
}
