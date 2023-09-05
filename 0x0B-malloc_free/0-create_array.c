#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * buffer: the address of memory to print
 * size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);

if (size == 0)
	return (0);
while (size--)
	n[size] = c;
	return (n);
}
