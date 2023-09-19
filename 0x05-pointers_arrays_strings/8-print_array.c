#include "main.h"

/**
 * print_array  - print a string rv
 *
 * Description: 'string rv  printer'
 * @a: int  parametre to print
 * @n: int parametre
 *
 * Return: lenght of a string
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");

}
