#include <stdio.h>

/**
 * main - print program name
 * Description: 'this program is about print program name'
 * @argc: int parameter
 * @argv: char const parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	for (i = 1 ; i <= argc - 1 ; i++)
	printf("%s\n", argv[i]);

	return (0);
}
