#include "main.h"

/**
 *_strcmp - compares two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *Return: - or + or 0
 */
int _strcmp(char *s1, char *s2)
{
	int aka = 0;
	int vic;

	while (s1[aka] == s2[aka] && s1[aka] != '\0')
	{
		aka++;
	}

	vic = s1[aka] - s2[aka];
	return (vic);
}
