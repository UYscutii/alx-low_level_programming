#include "main.h"
/**
 *main - entry point
*description: printing alphabets in lowercase
*Return : always 0
 */
int print_alphabet(void)
{
	int x;

	for (x = 97; x  < 123; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
