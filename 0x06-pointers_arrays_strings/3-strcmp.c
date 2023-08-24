#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: Frist string
 * @s2: Second String
 *
 * Return: Negative value if si is less than s2,
 * Positive value if s1 is greater than s2,
 * 0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)(*s1) - (int)(*s2));
}
