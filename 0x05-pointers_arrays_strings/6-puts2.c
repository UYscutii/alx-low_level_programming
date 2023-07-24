#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	while (x % 2 == 0)
	{
		_putchar(str[x])
	}
	_putchar('\n');
}
