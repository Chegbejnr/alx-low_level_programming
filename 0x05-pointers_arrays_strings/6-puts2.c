#include "main.h"

/**
 * puts2 - prints every other character 
 * starting with the first character
 * @str: input 
 * return: print
 */
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\n')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (o = 0; 0 < length; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(sr[o]);
		}
	}
	_putchar('\n')
}
