#include "main.h"

/**
 *  _strncat - concatenate two strings
 *  using at most n bytes from src
 *  @dest: input value
 *  @src: input value
 *  @n: input value
 *
 *  Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	if (n < 0)
	{
		return dest;
	}

	int i, j;
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
