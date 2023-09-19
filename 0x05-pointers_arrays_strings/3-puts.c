#include "main.h"

/**
 * _puts - print a string
 *
 * Description: 'string printer'
 * @s: string parametre to print
 *
 * Return: lenght of a string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');

}
