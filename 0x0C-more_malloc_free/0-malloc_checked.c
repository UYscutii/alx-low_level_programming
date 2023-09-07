#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocate memory with error checking
 *@b: The number of bytes to allocate
 *
 *this function allocates 'b' bytes of memory using malloc
 *
 * Return: A pointer to the allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);
	return (x);
}
