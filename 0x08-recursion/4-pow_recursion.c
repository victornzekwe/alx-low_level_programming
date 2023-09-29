#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the
 * @x: 1st integer
 * @y: 2nd integer
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
