#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * @min: param
 * @max: param
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int vic, aka;

	if (min > max)
	{
		return (NULL);
	}
	vic = max - min + 1;
	p = malloc(sizeof(int) * vic);
	if (p == NULL)
	{
		return (NULL);
	}
	for (aka = 0; aka < vic; aka++)
	{
		p[aka] = min + aka;
	}
	return (p);
}
