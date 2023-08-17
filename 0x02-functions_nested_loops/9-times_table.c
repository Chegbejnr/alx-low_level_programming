#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			d = c / 100;
			e = (c / 10) % 10;
			c = c % 10;

			if (d > 0)
				_putchar(d + '0');
			else if (d != 0)
				_putchar(' ');

			if (e > 0 || d > 0)
				_putchar(e + '0');
			else if (b != 0)
				_putchar(' ');

			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
