#include "main.h"

/**
 * _strlen -string length
 *
 * Description: 'returns the length of a string'
 * @s: string char input
 *
 * Return: lenght of a string
 */

void _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}
