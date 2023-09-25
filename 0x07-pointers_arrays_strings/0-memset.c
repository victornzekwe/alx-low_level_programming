#include "main.h"

/**
 * _memset - writes a function that fills memory with constant byte
 * @b: constant byte
 * @s: pointed destination
 * @n: bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
