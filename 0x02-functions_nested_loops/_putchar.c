#include <unistd.h>
#include "main.h"
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}