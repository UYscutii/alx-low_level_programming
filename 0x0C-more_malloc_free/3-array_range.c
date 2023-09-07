#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Create an array of integers
 * in a specified range
 *
 * Description: This function allocates and returns an array of integers
 * containing values from min to max
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: arrey of integers
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
