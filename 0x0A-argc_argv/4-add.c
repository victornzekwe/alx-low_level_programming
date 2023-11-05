#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: param
 * @argv: param
 * Return: 0 ? 1
 */

int main(int argc, char *argv[])
{
	int vic, aka;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (vic = 1; vic < argc; vic++)
		{
			for (aka = 0; argv[vic][aka] != '\0'; aka++)
			{
				if (argv[vic][aka] < 48 || argv[vic][aka] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[vic]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
