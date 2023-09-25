#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x, m;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[x] == accept[m])
			{
				return (s + x);
			}
		}
	}
	return (NULL);
}
