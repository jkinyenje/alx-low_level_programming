#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
