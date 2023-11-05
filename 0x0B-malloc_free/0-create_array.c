#include <stdlib.h>
#include "main.h"

/**
 * create_array - function
 * @size: param
 * @c: param
 * Return: aka
 */

char *create_array(unsigned int size, char c)
{
	char *aka;
	unsigned int vic;

	if (size == 0)
	{
		return (NULL);
	}
	aka = malloc(sizeof(char) * size);
	if (aka == NULL)
	{
		return (NULL);
	}
	for (vic = 0; vic < size; vic++)
	{
		aka[vic] = c;
	}
	return (aka);
}
