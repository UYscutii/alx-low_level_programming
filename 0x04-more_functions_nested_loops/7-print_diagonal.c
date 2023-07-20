#include "main.h"
/*
 *main - entry point
 *Description: printing most numbers
 *Return : always 0 (success)
 **/
void print_diagonal(int n)
{
	int space;
	int slash;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (slash = 1; slash <= n; slash++)
		{
					for (space = 1; space < n ; space++)
			{
					_putchar(32);
					_putchar(47);
					_putchar('\n');
			}
		}
	}
}
