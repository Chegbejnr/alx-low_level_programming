#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The Converted integer.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	for (int i = 0; s[i] != '\0'; ++i)
	{

		if (s[i] == '-')
	{
		sign = -1;
	}

	else if (s[i] >= '0' && s[i] - '0')
	{
		result = result * 10 + (s[i] - '0');
	}
		else if (result != 0)
		{
			break;
		}
	}

	return (result * sign);
}
