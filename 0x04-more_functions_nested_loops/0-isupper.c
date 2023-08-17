#include "main.h"

/**
 * _isupper - Checks for lowercase or uppercase character
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
