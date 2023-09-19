#include "main.h"

/**
 * swap_int - swaping
 *
 * Description: 'swaps the values of two integers'
 * @a: int parameter
 * @b : second int parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
