#include <stdio.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int aka;

	for (aka = 0; aka < argc; aka++)
	{
		printf("%s\n", argv[aka]);
	}
	return (0);
}
