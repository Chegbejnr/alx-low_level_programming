#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes to copy
 *
 * Return: pointer to destintation memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (;r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
