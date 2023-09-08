#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	*s++ = b;
	return (ptr);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *h;

	if (nmemb == 0 || size == 0)
		return (NULL);
		h = malloc(sizeof(int) * nmemb);
		if (h == 0)
		return (NULL);
		_memset(h, 0, nmemb * sizeof(int));
		return (h);
}
