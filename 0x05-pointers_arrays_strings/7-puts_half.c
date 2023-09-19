#include "main.h"

/**
 * puts_half  - print a string rv
 *
 * Description: 'string rv  printer'
 * @s: string parametre to print
 *
 * Return: lenght of a string
 */
void puts_half(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
