#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;
		while (dest[len] != '\0')
		len++;
	for (src[i]; i < n && src[i] != '\0'; i++)
	{
			dest[len + i] = src[i];
	}
		dest[len + i] = '\0';
			return (dest);
}
