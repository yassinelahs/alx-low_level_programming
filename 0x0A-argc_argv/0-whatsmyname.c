#include <stdio.h>

/**
 * main - print program name
 * Description: 'this program is about print program name'
 * @argc: int parameter
 * @argv: char parameter
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	print("%s\n", argv[0]);
	return (0);

}
