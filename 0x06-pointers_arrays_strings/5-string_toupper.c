#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_toupper(char str *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i <= 122 && i >= 97)
		{
			str[i] = str[i] - 32;
		}
	}
		return (str);
}
