#include "main.h"

/**
 * print_rev  - print a string rv
 *
 * Description: 'string rv  printer'
 * @s: string parametre to print
 *
 * Return: lenght of a string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
