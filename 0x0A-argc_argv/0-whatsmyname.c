#include<stdio.h>

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

int main(int argc _attribute((unused)), char *argv[])
{ù
	printf("%s\n", argv[0]);
	return (0);
}
