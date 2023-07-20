#include "main.h"
/*
 *main - entry point
 *Description: printing most numbers
 *Return : always 0 (success)
 **/
void print_square(int size)
{
	int c, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
				{
					_putchar(35);
				}
			_putchar('\n');
		}
	}
}
