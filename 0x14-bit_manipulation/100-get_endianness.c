#include "main.h"

/**
 * get_endianness - To check if it is small or big
 * Return: 0
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
