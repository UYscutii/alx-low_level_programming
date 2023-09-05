#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * buffer: the address of memory to print
 * size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *n = malloc(sizeof(char) * size);

if (size == 0 || n == NULL)
	return (NULL);
for (x = 0; x < size; x++)
{	n[x] = c;
}
	return (n);
}
