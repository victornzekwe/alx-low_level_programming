#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function
 * @str: param
 * Return: hush
 */

char *_strdup(char *str)
{
	int aka, vic;
	char *hush;

	if (str == NULL)
	{
		return (NULL);
	}
	for (vic = 1; str[vic]; vic++)
	{
		;
	}
	hush = malloc((sizeof(char) * vic) + 1);
	if (hush == NULL)
	{
		return (NULL);
	}
	for (aka = 0; aka < vic; aka++)
	{
		hush[aka] = str[aka];
	}
	hush[aka] = '\0';
	return (hush);
}
