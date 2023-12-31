#include "main.h"

/**
 * _isdigit - check if numbers are (0-9)
 * @c: char to be checked
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
