#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
	dest[i] = '\0';
	i++;
	}
		return (dest);
}
