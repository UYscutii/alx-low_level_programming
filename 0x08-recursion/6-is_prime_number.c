#include "main.h"
#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (othrn % n == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
