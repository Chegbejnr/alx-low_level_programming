#include "main.h"

/**
 * string_toupper - Convert aoo lowercase letters in a string to uppercase
 * @s: Input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}

		ptr++;
	}


	return (s);
}
