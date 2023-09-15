#include "main.h"

/**
 * more_numbers - more numbers
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int x;

	for (c = 1; c <= 10; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('1');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
