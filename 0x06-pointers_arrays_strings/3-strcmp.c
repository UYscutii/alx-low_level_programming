#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		i++;
	}
		return (diff);
