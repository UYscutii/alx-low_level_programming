#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n; i < (n - 1); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
