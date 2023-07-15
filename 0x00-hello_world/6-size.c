#include <stdio.h>
/*
 * main - entry point
 * Description: printing different data type size using printf
 * Return : always 0
 */
int main(void)
{
	printf("size of a char: %d", sizeof(char));
	printf("size of an int: %d", sizeof(int));
	printf("size of a long int: %d", sizeof(long int));
	printf("size of a long long int: %d", sizeof(long long int));
	printf("size of a float: %d", sizeof(float));
	return (0);
}
