#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name : prints a name
 * @f : the printing function pointer
 * return : void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
