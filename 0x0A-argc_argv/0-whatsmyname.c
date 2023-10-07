#include <stdio.h>

/**
 * main - print program name
 * Description: 'this program is about print program name'
 * @argc: int parameter
 * @argv: char const parameter
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
