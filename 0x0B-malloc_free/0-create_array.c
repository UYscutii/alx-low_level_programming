#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - the working function that prints buffer in hexa
 * @size: the size of the memory to print
 * @c: the replaced character
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
