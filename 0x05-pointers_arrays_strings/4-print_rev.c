#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	x++;
	while (x--)
	{
	_putchar(s[x]);
	}
		_putchar('\n');
}
