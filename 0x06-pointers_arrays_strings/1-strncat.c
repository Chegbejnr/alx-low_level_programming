#include "main.h"

/**
 *  _strncat - concatenate two strings
 *  using at most n bytes from src
 *  @dest: destination buffer
 *  @src: source string
 *  @n: maximum number of bytes to append from src
 *
 *  Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
