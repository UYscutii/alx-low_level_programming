#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int x, y;
	char temp;

	while (s[x] != '\0')
		x++;
	for (y = 0; y < x / 2; y++)
	{
		temp = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = temp;
	}
}
