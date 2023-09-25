#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int x, m, sum_1 = 0, sum_2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
	{
		sum_1 = sum_1 + a[x];
	}
	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
	sum_2 = sum_2 + a[m];
	printf("%d, %d\n", sum_1, sum_2);
}
