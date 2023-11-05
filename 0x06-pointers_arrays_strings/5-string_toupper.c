#include "main.h"

/**
 * string_toupper - function
 * @aka: param
 * Return: aka
 */

char *string_toupper(char *aka)
{
	int vic = 0;

	while (aka[vic] != '\0')
	{
		if (aka[vic] >= 'a' && aka[vic] <= 'z')
		{
			aka[vic] -= 'a' - 'A';
		}
		vic++;
	}
	return (aka);
}
