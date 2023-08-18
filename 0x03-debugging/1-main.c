#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	printf("infinite loop incoming :(\n");

	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	printf("infinite loop avoided! \\o/\n");

	return (0);
}
