#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; *s++)
		l++;
	return (l);
}
