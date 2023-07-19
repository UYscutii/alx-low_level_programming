#include "main.h"
/**
 *main - entry point
*description: printing alphabets in lowercase
*Return : always 0
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x  <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	}
