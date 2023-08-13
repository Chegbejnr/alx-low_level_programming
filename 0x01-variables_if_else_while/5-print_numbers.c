#include <stdio.h>

/**
 * main - single digits number of base 10 starting with 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar (n + '0');
	}
	putchar ('\n');

	return (0);
}
