#include "main.h"

/**
 * _strcat - function
 * @dest: param
 * @src: param
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int vic;
	int aka;

	for (vic = 0; dest[vic] != '\0'; vic++)
	{
		;
	}
	for (aka = 0; src[aka] != 0; aka++)
	{
		dest[vic] = src[aka];
		vic++;
	}
	dest[vic] = '\0';
	return (dest);
}
