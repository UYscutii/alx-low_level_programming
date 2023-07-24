#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	while (i = i / 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
