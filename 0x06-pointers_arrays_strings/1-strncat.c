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
	int c;

	c = 0;
	while (dest[c])
		c++;

	for (n; src[n]; n++)
		dest[c++] = src[n];

	return (dest);

}
