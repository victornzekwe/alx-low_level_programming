#include "main.h"

/**
 * reverse_array - function
 * @a: param
 * @n: param
 */

void reverse_array(int *a, int n)
{
	int vic = 0;
	int aka;

	while (vic < n--)
	{
		aka = a[vic];
		a[vic++] = a[n];
		a[n] = aka;
	}
}
