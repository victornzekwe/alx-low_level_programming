#include "main.h"

/**
 * main - Entry point
 * @a: number
 * @b: number2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
