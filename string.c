#include "main.h"
/**
 * print_str- a function that prints strings.
 * @s: parameter.
*/

void print_str(char *s)
{
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != 0; i++)
	{
		_putchar(s[i]);
	}
}
