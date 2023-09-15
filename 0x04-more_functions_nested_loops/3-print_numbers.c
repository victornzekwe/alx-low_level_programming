#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
char n;

n = '0';
while (n <= '9')
{
_putchar(n);
n++;
}
_putchar('\n');
}
