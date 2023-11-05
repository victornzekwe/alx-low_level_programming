#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function
 * @width: param
 * @height: param
 * Return: p
 */

int **alloc_grid(int width, int height)
{
	int aka, vic;
	int **p;

	if (height < 1)
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(p) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (aka = 0; aka < height; aka++)
	{
		p[aka] = malloc(sizeof(int) * width);
		if (p[aka] == NULL)
		{
			for (vic = 0; vic < aka; vic++)
			{
				free(p[vic]);
			}
			free(p);
			return (NULL);
		}

		for (vic = 0; vic < width; vic++)
		{
			p[aka][vic] = 0;
		}
	}
	return (p);
}
