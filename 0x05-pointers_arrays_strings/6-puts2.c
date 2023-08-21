#include "main.h"

/**
 * puts2 - prints every other character 
 * starting with the first character
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
        int length = 0;
        int t = 0;
        char *y = str;
        int o;

        while (*y != '\0')
        {
                y++;
                length++;
        }
        t = length - 1;
        for (o = 0; o < length; o++)
        {
                if (o % 2 == 0)
                {
                        _putchar(str[o]);
                }
        }
        _putchar('\n');
}

