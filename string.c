#include "main.h"
/**
 * print_str- a function that prints strings.
 * @s: parameter.
*/

void print_str(char *s)
{
	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 * count_str- a function that counts a string.
 * @s: parameter.
 * Return: int.
*/

int count_str(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
