#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';


	return (dest);
}
