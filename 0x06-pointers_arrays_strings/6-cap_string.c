#include "main.h"

/**
 * cap_string - function
 * @vic: param
 * Return: vic
 */

char *cap_string(char *vic)
{
	int aka = 0;

	while (vic[aka] != '\0')
	{
		if (vic[0] >= 97 && vic[0] <= 122)
		{
			vic[0] = vic[0] - 32;
		}
		if (vic[aka] == ' ' || vic[aka] == '\t' || vic[aka] == '\n'
		    || vic[aka] == ',' || vic[aka] == ';' || vic[aka] == '.'
		    || vic[aka] == '.' || vic[aka] == '!' || vic[aka] == '?'
		    || vic[aka] == '"' || vic[aka] == '(' || vic[aka] == ')'
		    || vic[aka] == '{' || vic[aka] == '}')
		{
			if (vic[aka + 1] >= 97 && vic[aka + 1] <= 122)
			{
				vic[aka + 1] = vic[aka + 1] - 32;
			}
		}
		aka++;
	}
	return (vic);
}
