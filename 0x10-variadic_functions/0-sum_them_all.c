#include "variadic_functions.h"

/**
 * sum_them_all - sums variable args
 * @n: num of args
 * @...: the left integers to sum
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list num;

	if (n == 0)
		return (0);
	va_start(num, n);
	while (i--)
		s = s + va_arg(num, int);
	va_end(num);
		return (s);
}
