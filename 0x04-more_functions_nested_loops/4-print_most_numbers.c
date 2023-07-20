#include "main.h"
/*
 *main - entry point
 *Description: printing most numbers
 *Return : always 0 (success)
 **/
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
{
	if (n == 50 || n == 52)
		continue;
		_purchar('n');
}
	_putchar('\n');
}
