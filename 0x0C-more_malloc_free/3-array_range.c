#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
