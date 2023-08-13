#include <stdio.h>

/**
 * main - Prints all possible combinations of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	for(m = 0; m < 10; m++)
	{
		for(n = m; n < 10; n++)
		{
			putchar(m = '0');
			putchar(n = '0');

			if(m != 9 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	
	putchar('\n');

	return (0);
}
