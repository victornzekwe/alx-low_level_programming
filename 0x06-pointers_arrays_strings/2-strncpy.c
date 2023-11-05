#include "main.h"

/**
 * _strncpy - function
 * @dest: param
 * @src: param
 * @n: param
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int vic;

	for (vic = 0; vic < n && src[vic] != '\0'; vic++)
	{
		dest[vic] = src[vic];
	}
	for (; n > vic; vic++)
	{
		dest[vic] = '\0';
	}
	return (dest);
}
