#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	do 
	{
		i++;
		src[i] = dest[i];
	}
	while (src[i] != '\0');
	return (dest);
}
