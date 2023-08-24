#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value 
 *
 * Return: 0 on success;
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	while (dest[i] != '\0')
	{
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
