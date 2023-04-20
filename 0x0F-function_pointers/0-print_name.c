#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: Name
 * @f: Function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
