#include <stdio.h>
#include <stdlib.h>

/**
 * main - print program name
 * Description: 'this program is about print program name'
 * @argc: int parameter
 * @argv: char const parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i <= argc ; i++)
	printf("%s\n", argv[i]);

	return (0);
}
