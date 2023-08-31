#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else 
		return (-1);
}	
