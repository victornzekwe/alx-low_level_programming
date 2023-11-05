#include "main.h"

/**
 * leet - function
 * @vic: param
 * Return: vic
 */

char *leet(char *vic)
{
	int a = 0;
	int b;
	char aka[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char ola[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (vic[a])
	{
		for (b = 0; b < 10; b++)
		{
			if (vic[a] == ola[b])
			{
				vic[a] = aka[b];
			}
		}
		a++;
	}
	return (vic);
}
