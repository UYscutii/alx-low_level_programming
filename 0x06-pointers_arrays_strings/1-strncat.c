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
	for (src[i]; i <= n; i++)
	{
		while (src[i] != '\0')
		{
			dest[len + i] = dest[len];
		}
	}
		dest[len + i] = '\0';
			return (dest);
}
