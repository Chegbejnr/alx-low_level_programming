#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string
 * @str: String to reverse
 */
void rev_string(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while (*(str + i) != '\0')
    {
        i++;
    }
    i--;

    for (j = 0; j < i; j++, i--)
    {
        temp = *(str + j);
        *(str + j) = *(str + i);
        *(str + i) = temp;
    }
}

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Buffer size
 * Return: Pointer to the result or NULL if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int overflow = 0, i = 0, j = 0, digits = 0;
    int val1 = 0, val2 = 0, temp_tot = 0;

    while (*(n1 + i) != '\0')
        i++;
    while (*(n2 + j) != '\0')
        j++;
    i--;
    j--;

    if (j >= size_r || i >= size_r)
        return (NULL);

    while (j >= 0 || i >= 0 || overflow == 1)
    {
        val1 = (i >= 0) ? *(n1 + i) - '0' : 0;
        val2 = (j >= 0) ? *(n2 + j) - '0' : 0;

        temp_tot = val1 + val2 + overflow;

        if (temp_tot >= 10)
            overflow = 1;
        else
            overflow = 0;

        if (digits >= (size_r - 1))
            return (NULL);

        *(r + digits) = (temp_tot % 10) + '0';
        digits++;
        j--;
        i--;
    }

    if (digits == size_r)
        return (NULL);

    *(r + digits) = '\0';
    rev_string(r);
    return (r);
}

