#include "main.h"

/**
 * puts2  - print a string rv
 *
 * Description: 'string rv  printer'
 * @s: string parametre to print
 *
 * Return: lenght of a string
 */
void puts2(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');

}
