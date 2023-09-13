#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet iun lower case
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
