#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		i++;
		 dest[i] = src[i];
	} while (src[i] != '\0');
	dest[i] = '\0';
	return (dest);
}
