#include "main.h"

/**
 * *_strcpy  - print a string rv
 *
 * Descriptiion: 'string rv  printer'
 * @dest: char  parametre to print
 * @src: char  parametre
 *
 * Return: lenght of a string
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != "\0");

	return (dest);

}
