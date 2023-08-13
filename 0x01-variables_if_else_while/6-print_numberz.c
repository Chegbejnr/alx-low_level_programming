#include <stdio.h>

/**
 * main - Running numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	for (int n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
