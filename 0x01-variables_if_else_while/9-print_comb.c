#include <stdio.h>

/**
 * main - Prints all possible combinations of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for(n= '0'; n <= '10'; n++)
	{
		putchar (c);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
