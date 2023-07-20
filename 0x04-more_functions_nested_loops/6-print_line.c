#include "main.h"
/*
 *main - entry point
 *Description: printing most numbers
 *Return : always 0 (success)
 **/
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		_putchar(95);
			_putchar('\n');
	}
}
