#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: param
 * @size: param
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned char *ptr;
	unsigned int aka;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	ptr = (unsigned char *)p;
	for (aka = 0; aka < nmemb * size; aka++)
	{
		ptr[aka] = 0;
	}
	return (p);
}
