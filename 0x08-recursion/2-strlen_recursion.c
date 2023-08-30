#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	if (*s > '\0')
	{
	n = n + _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
