#include "main.h"

/**
 * *_strncat  - make strncat function
 *
 * Description: 'make stnrcut function just n char '
 * @src: src string
 * @dest: dest string
 * @n: char nbr
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != "\0"; i++)
		dest[c + i] = src[i];

	return (dest);

}
