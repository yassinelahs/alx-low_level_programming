#include "main.h"

/**
 * print_rev  - print a string rv
 *
 * Description: 'string rv  printer'
 * @s: string parametre to print
 *
 * Return: lenght of a string
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i != 0)
	{
		_putchar(*s + 0);
		i--;
	}
	_putchar('\n');

}
