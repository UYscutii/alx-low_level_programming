#include "main.h"
/*
 * main - entry point
 * desription; writing a function that returns different numbers
 * Retunr: return 0 1 or -1
 **/
int print_sign(int n)
	{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	_putchar('\n');
	return (0);
	}
