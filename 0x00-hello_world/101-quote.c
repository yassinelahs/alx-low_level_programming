#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'puts out put '
 * Return: Always 1 (Success)
 */
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quote, sizeof(quote) - 1);
	return (1);
}

