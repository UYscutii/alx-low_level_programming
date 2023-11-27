#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup  - returns a pointer
 * @str: a string pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int size = 0;
	int x = 0;
	char *i;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	i = malloc(size * sizeof(*str + 1));
	if (i == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < size; x++)
			i[x] = str[x];
	}
	return (i);
}
