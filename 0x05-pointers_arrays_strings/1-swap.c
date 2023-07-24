#include "main.h"
/**
 * main - check the code
 * void swap_int - swaps two integers
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
