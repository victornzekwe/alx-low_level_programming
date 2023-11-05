#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function
 * @s1: param
 * @s2: param
 * Return: aka
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *aka;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a]; a++)
	{
		;
	}
	for (b = 0; s2[b]; b++)
	{
		;
	}
	c = a + b + 1;
	aka = malloc(sizeof(char) * c);
	if (aka == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < c; d++)
	{
		if (d < a)
		{
			aka[d] = s1[d];
		}
		else
		{
			aka[d] = s2[d - a];
		}
	}
	return (aka);
}
