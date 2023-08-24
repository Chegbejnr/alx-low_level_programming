#include <stdio.h>
/**
 * Line of code wriiten here...
 * Remember:
 * @n: value to print
 * Return: o always Success
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;

	p = &n;

	/**
	 * line of code written here...
	 * Remember:
	 * - no use of a
	 * - do not modify p
	 * -  use one statement only
	 * - not allowed to code anthing else
	 */

	*(int *)((char *)&a + (sizeof(int) * 2)) = 98;
	/* ...This prints 98\n */

	printf("a[2] = %\n", a[2]);

	return (0);
}
