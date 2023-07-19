#include "main.h"
/**
*main - entry point
*Description: returning 0 if loercase and 1 if uppercase
Return : 1 or 0
*/
int _islower(int c)
	{
	if (c >= 97 && c <= 122)
	{
	return (0);
	}
	else
	{
	return (1);
	}
	_putchar('\n');
	}
