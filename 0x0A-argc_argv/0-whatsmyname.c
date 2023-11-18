#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Description: This program prints the name of the executable.
 *              It demonstrates the usage of command-line arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute((unused))__, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
