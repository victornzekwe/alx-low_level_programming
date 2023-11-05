#include "main.h"

/**
 * _strncat - function
 * @dest: param
 * @src: param
 * @n: param
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int vic;
	int aka;

	for (vic = 0; dest[vic] != '\0'; vic++)
	{
		;
	}
	for (aka = 0; src[aka] != '\0' && n > 0; aka++, n--, vic++)
	{
		dest[vic] = src[aka];
	}
	return (dest);
}
