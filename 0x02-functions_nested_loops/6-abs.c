#include "main.h"
/*
 * main entry point
 * return: always 0(success)
 **/
int _abs(int n)
	{
	if (n > 0)
	{
	return (n);
	}
	else
	{
	return (-n);
	}
	_putchar('\n');
	return (0);
	}
