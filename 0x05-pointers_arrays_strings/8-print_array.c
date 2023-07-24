#include "main.h"
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i <= n)
		printf("%d ,", a[i]);
		else if (i == n)
		printf("%d", a[n]);
	}
	printf("\n");
}
