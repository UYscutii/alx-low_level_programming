#include "main.h"
/**
 *main - entry point
*description: printing alphabets in lowercase
*Return : always 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 1; y  <= 10; y++)
	{
	for (x = 'a'; x  <= 'z'; x++)
	{
	_putchar(x);
	_putchar('\n');
	}
	}
	}
