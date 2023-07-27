#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
		i++;
	for (i = 0; i < n; i++)
	{	
	 	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest)
}
